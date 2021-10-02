from django.contrib import messages



class UserFormValidation:
    def __init__(self,request,name,email,password1,password2):
        self.request = request
        self.name = name
        self.email = email
        self.password1 = password1
        self.password2 = password2

    
    def is_valid(self):
        is_formValid = self.nameValid() and self.emailValid() and self.passwordValid()

        return is_formValid


    def nameValid(self):
        if len(self.name)==0:
            messages.error(self.request,"enter your name")
            return False
        
        return True

    def emailValid(self):
        if((self.email).endswith(".com")):
            return True
        
        messages.error(self.request,"invalid email")
        return False
    
    def passwordValid(self):
        if(self.password1!=self.password2):
            messages.error(self.request,"password didn't matched")
            return False
        
        elif(len(self.password1)<8):
            messages.error(self.request,"password lenght should be greater than 8")
            return False
        
        elif(len(self.password1)>15):
            messages.error(self.request,"password length should be less than 15")
            return False
        
        return True