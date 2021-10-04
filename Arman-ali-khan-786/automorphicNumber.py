n=int(input("enter a no: "))
sq=n*n
k=1
m=n
while m>0:
    k=k*10
    m=m//10
p=sq%k
if p==n:
    print("it is an automorphic no.")
else:
    print("it is not an automorphic no.")
