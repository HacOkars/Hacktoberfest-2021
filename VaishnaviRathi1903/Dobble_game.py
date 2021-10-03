import string
import random
n=int(input('Enter how many characters you want.....'))
symbols=[]
#print(string.printable)
symbols=list(string.printable)
#symbols=list(string.ascii_letters)
card1=[0]*n
card2=[0]*n
pos1=random.randint(0,4)
pos2=random.randint(0,4)
#print(pos1)
#print(pos2)
samesym=random.choice(symbols)
symbols.remove(samesym)
if(pos1==pos2):
  card1[pos1]=samesym
  card2[pos1]=samesym
else:
  card1[pos1]=samesym
  card2[pos2]=samesym
  card1[pos2]=random.choice(symbols)
  symbols.remove(card1[pos2])
  card2[pos1]=random.choice(symbols)
  symbols.remove(card2[pos1])
i=0  
while(i<n):
  if(i!=pos1 and i!=pos2):
    alpha1=random.choice(symbols)
    alpha2=random.choice(symbols)
    symbols.remove(alpha1)
    symbols.remove(alpha2)
    card1[i]=alpha1
    card2[i]=alpha2
  i=i+1
print(card1)
print(card2)
ch=input("spot the similar symbol.... ")
if(ch==samesym):
  print("CORRECT")
else:
  print("WRONG")