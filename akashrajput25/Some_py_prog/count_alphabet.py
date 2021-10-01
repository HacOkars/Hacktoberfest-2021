name=input("Enter your name\n")
x=len(name)
i=0
temp=""
for i in range(x) :
    if name[i] not in temp:
      temp+=name[i]
      print(f"{name[i]}:{name.count(name[i])}")
    

