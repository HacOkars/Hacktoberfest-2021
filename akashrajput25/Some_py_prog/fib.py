def fibo(no):
    a=0
    b=1

    if no==1:
        print(a)
    elif no==2:
        print(a,b)
    else:
        print(a,b ,end=" ")
        for i in range(no-2):
            c=a+b
            a=b
            b=c
            print(b,end=" ")

no=int(input("enter the no"))
fibo(no)

        
