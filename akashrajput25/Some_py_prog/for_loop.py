num=input("ENter a no for sum of digits\n")
x=len(num)
total=0
for i in range(0,x):
    total+=int(num[i])
print(total)