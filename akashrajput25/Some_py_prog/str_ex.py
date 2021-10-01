name,ch=input("Enter the name and char to count the occurence\n").split(',')
print(len(name))
l_name=name.lower()
l_ch = ch.lower()
print(l_name.count(l_ch))

name2="              Akash              "
print("....."+name2.lstrip())
print("......"+name2.rstrip())
