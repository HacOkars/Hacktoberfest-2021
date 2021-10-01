num = 2**1000

# CONVERT THE NUM TO STRING
stringOfNum = str(num)

# SPLIT THE STRING IN SINGE CHARS
chars = [i for i in stringOfNum]

# CONVERT THE CHARS BACK TO DIGITS
digits = [int(i) for i in chars]

# SUM OF THE DIGITS
print(sum(digits))
