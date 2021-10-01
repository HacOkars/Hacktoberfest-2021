def greater(a,b):
    if a>b:
        return a
    else:
        return b

def new_greatest(a,b,c):
    return greater(greater(a,b),c)

print(new_greatest(10000,2000,400))