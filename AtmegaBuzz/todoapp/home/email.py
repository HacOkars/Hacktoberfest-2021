from django.core.mail import send_mail
from django.http.response import HttpResponse
from django.urls import reverse
from django.contrib.sites.shortcuts import get_current_site
from django.utils.http import urlsafe_base64_encode,urlsafe_base64_decode
from django.utils.encoding import force_bytes, force_text, DjangoUnicodeDecodeError
from .utils import token_generator
from todoapp.settings import EMAIL_HOST_USER
from django.http import BadHeaderError

def sendVerificationEmail(request,user):

    # -- got uidb64 --> encoded it --> converted to bytes

    uidb64 = urlsafe_base64_encode(force_bytes(user.pk))

    # -- got token
    token = token_generator.make_token(user)

    # got the domain 
    domain = get_current_site(request).domain

    # join uidb64 with token to create unique verification link
    link = reverse("activate",kwargs={'uidb64':uidb64,'token':token})

    activate_url_link = 'http://'+ domain + link

    email_subject = "Account Verification"

    email_body = f"hi {user.first_name} to activate your account click on this link\n {activate_url_link}"

    try:
        send_mail(
            subject = email_subject,
            message = email_body,
            from_email = EMAIL_HOST_USER,
            recipient_list=[user.email],
            fail_silently=False
        )
    except BadHeaderError:
        return HttpResponse("invalid header found")

    

