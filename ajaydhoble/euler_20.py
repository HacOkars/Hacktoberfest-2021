import math
def fact(n):
    return math.factorial(n)


num = fact(100)
stringOfNum = str(num)
chars = [i for i in stringOfNum]
digits = [int(i) for i in chars]

print(sum(digits))
