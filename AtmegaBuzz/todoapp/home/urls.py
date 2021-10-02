from django.urls import path
from home import views

urlpatterns = [
    path("",views.index,name="index"),
    path("detail/<int:pk>",views.todo_detail_view,name="detail"),
    path("update/<int:pk>",views.update_view,name="update"),
    path("delete/<int:pk>",views.delete_view,name="delete"),
    path("login",views.login_view,name="login"),
    path("signup",views.signup_view,name="signup"),

    path("activate/<uidb64>/<token>",views.VerificationView.as_view(),name="activate")
]
