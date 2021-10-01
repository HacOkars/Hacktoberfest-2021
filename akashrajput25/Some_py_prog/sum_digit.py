no=input("Enter the number")
sum=0
x=len(no)
while x>0 :
    sum+=int(no[x-1])
    x-=1
print(sum)