def is_pal(str):
    if str==str[::-1]:
        return True
    return False

str=input("Enter the string to check if it is palindrome\n")
if is_pal(str): print("It's palindrome")
