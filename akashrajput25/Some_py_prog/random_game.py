import random
win_no=random.randint(1,100)

inp_no=int(input("Enter the no. between 1-100\n"))
if win_no==inp_no:
    print("You guessed right\n")
elif win_no<inp_no:
    print("you guessed higher no.\n")
else:
    print("You guessed low no.\n")