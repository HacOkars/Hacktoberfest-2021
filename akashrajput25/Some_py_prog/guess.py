import random
win_no=random.randint(1,20)
guess=1

print(win_no)
while True:
    guess_no=int(input("Enter the no. between 1-20\n"))
    if win_no==guess_no:
        print(f"You won in {guess} tries")
        break
    else:
        if guess_no<win_no:
            print("Too low")
        else:
            print("Too high")
        guess+=1
        continue