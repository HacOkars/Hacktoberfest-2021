from django.db import models

# Create your models here.

class Todo(models.Model):
    title = models.CharField(max_length=20,blank=False,null=False)
    description = models.TextField(max_length=500,default="No Description Specified")
    user = models.CharField(max_length=100,null=True,blank=True)