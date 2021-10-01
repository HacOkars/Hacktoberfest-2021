import random
# rock paper scissor by CHAITANYA GOTHWAL


def game(comp, you):
    if comp == you:
        return None
    elif comp == 'r':
        if you == 'p':
            return True
        elif you == 's':
            return False
    elif comp == 'p':
        if you == 's':
            return True
        elif you == 'r':
            return False
    elif comp == 's':
        if you == 'r':
            return True
        elif you == 'p':
            return False


comp = print("Comp turn : Rock(r) Paper(p) Scissor(s)\n")
randNo = random.randint(1, 3)
if randNo == 1:
    comp = 'r'
elif randNo == 2:
    comp = 'p'
elif randNo == 3:
    comp = 's'
you = input("Your's turn : Rock(r) Paper(p) Scissor(s)\n")
print(f"Computer choose {comp}")
print(f"You choose {you}")
a = game(comp, you)
if a == None:
    print("The game is tie")
elif a:
    print("You win")
else:
    print("You loose")
