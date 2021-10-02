
def win():
    check=0
    if r1[0]==r1[1]==r1[2]=='X':
        check=1
    if r2[0]==r2[1]==r2[2]=='X':
        return 0
    if r3[0]==r3[1]==r3[2]=='X':
        return 0
    if r1[0]==r2[1]==r3[2]=='X':
        return 0
    if r3[0]==r2[1]==r1[2]=='X':
        return 0
    if r1[0]==r2[0]==r3[0]=='X':
        return 0
    if r1[1]==r2[1]==r3[1]=='X':
        return 0
    if r1[2]==r2[2]==r3[2]=='X':
        return 0
    if r1[0]==r1[1]==r1[2]=='O':
        return 0
    if r2[0]==r2[1]==r2[2]=='O':
        return 0
    if r3[0]==r3[1]==r3[2]=='O':
        return 0
    if r1[0]==r2[1]==r3[2]=='O':
        return 0
    if r3[0]==r2[1]==r1[2]=='O':
        return 0
    if r1[0]==r2[0]==r3[0]=='O':
        return 0
    if r1[1]==r2[1]==r3[1]=='O':
        return 0
    if r1[2]==r2[2]==r3[2]=='O':
        return 0
    if check==1:
        print("player 1 won")

r1=['1','2','3']
r2=['4','5','6']
r3=['7','8','9']


def answer():
    print('',r1,'\n',r2,'\n',r3,'\n')

answer()

while True:
    x=int(input('Enter position Player 1(1-9): '))
    if x<=3:
        r1[x-1]='X'
        answer()
    elif x<=6:
        r2[x-4]='X'
        answer()
    elif x<=9:
        r3[x-7]='X'
        answer()
    win()

    x=int(input('Enter position Player 1(1-9): '))
    if x<=3:
        r1[x-1]='O'
        answer()
    elif x<=6:
        r2[x-4]='O'
        answer()
    elif x<=9:
        r3[x-7]='O'
        answer()
    win()

print("LOOP BROKE")

    

    
        