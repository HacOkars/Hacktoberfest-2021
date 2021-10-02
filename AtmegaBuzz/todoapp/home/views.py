from django.shortcuts import redirect, render, get_object_or_404
from django.utils.encoding import force_text
from django.utils.http import urlsafe_base64_decode
from .models import Todo
from django.contrib import messages
from django.contrib.auth.models import User
from django.contrib.auth import authenticate,login
from .validators import UserFormValidation
from django.views import View
from .utils import token_generator
from .email import sendVerificationEmail


# Create your views here.
def index(request):
    if not request.user.is_authenticated:
        return redirect('login')
        

    if request.method == "POST":
        title = request.POST['title']
        desc = request.POST['desc']
        Todo.objects.create(title=title,description=desc,user=request.user.username)


    todos = Todo.objects.filter(user=request.user.username)

    context ={
        'todos':todos
    }

    return render(request,"index.html",context)


def todo_detail_view(request,pk):


    todo = get_object_or_404(Todo,pk=pk)
    

    context = {
        'todo_detail': todo
        
    }

    return render(request,"detail.html",context)


def update_view(request,pk):


    description = request.POST['description']

    Todo.objects.filter(id=pk).update(description=description)

    messages.success(request,"todo updated!")

    return redirect(f"/detail/{pk}")


def delete_view(request,pk):
   

    Todo.objects.get(id=pk).delete()
        

    return redirect("/")



def login_view(request):

    

    if request.method == 'POST':

        email = request.POST['email']
        password = request.POST['password']
        user = authenticate(username=email,password=password)
       
            
        if user is not None:
            if user.is_active:
                login(request,user)
                return redirect('/')

            else:
                messages.error(request,"Account is not activated. please check your email")
                return render(request,"login.html")
        else:
            messages.error(request,"user not found please check the credentials")
            return render(request,"login.html")

    return render(request,"login.html")
    
    





def signup_view(request):

    

    if request.method=="POST":
        name = request.POST['name']
        email = request.POST['email']
        password1 = request.POST['password1']
        password2 = request.POST['password2']

        signupForm = UserFormValidation(request,name,email,password1,password2)
    
                
        if(signupForm.is_valid()):
            
            if User.objects.filter(email=email,username=email).exists():
                messages.add_message(request,messages.ERROR,"user already exist")
                

            else:
                user =  User.objects.create_user(email,email,signupForm.password1)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
                user.first_name = name
                user.is_active = False
                user.save()

                sendVerificationEmail(request,user)

            
                messages.add_message(request,messages.SUCCESS,"account created successfully. please check your email for confirmation")
                return redirect('login')
        
        
        
    return render(request,"signup.html")




#  verification

class VerificationView(View):

    def get(self,request,uidb64,token):

        try:
            id = force_text(urlsafe_base64_decode(uidb64))
            user = User.objects.get(pk=id)

            if not token_generator.check_token(user,token):
                messages.error(request,"Account already activated")
                return redirect('login')

            if user.is_active:
                messages.success(request,"Account activated successfully")
                return redirect("login")

            
            user.is_active = True
            user.save()

            messages.success(request,"Account activated successfully")
            
            return redirect("login")

        except:
            pass


        return redirect("login")