name,age=input("ENter your name and age\n").split()
age=int(age)
if (name[0]=='a' or name[0]=='A') and age>=10:
   print("You can watch coco\n") 
elif 10<age<=20:
    pass
else:
    print("You can't watch coco\n")