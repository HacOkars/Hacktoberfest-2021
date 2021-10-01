Q=[]
f=None
r=None

def isEmpty(Que):
  if (Que==[]):
    return True
  else:
    return False
  
def enqueue(Que,item):
  Que.append(item)
  if(len(Que)==1):
    f=r=0
  else:
    r=len(Que)-1
    
    
 def dequeue(Que):
    if(isEmpty(Que)):
      return('Underflow')
    else:
      i=Que.pop(0)
    if (len(Que)==0):
      f=r=None
    return i
  
  
def peek():
   if (isEmpty(Que)):
      return('Underflow')
    else:
      f=0
      return Que[f]
    
    
def Display():
    if (len(Que)==0):
      print('Queue is empty!')
    elif(len(Que)==1):
      print(Que[0],'<--Front <--Rear')
    else:
      f=0
      r=len(Que)-1
      print(Que[f],'<--Front')
      for x in range (1,r):
        print(Que[x])
      print(Que[r],'<--Rear')
      
      
 while True:
  print('/n/n/n')
  print('--This is Queue Implementation')
  print('1.Enqueue')
  print('2.Dequeue')
  print('3.Peek')
  print('4.Display')
  print('5.Exit')
ch=int(input('Enter the choice between 1 & 5'))

if(ch==1):
        item=int(input('Enter element')
        enqueue(Q,item)
        input('Press any key to continue')
           
if(ch==2):
        item=dequeue(Q)
        if(item=='Underflow'):
         print ('Queue is empty!)
        else:
          print('%d is dequeued '%item)
          input('Press any key to continue')
                
if(ch==3):
        item=peek(Q)
        if(item=='underflow'):
            print('Queue is empty')
        else:
            print('Front is %d'item)
            input('Press any to continue')

if(ch==4):
         Display(Q)
         input('Press any key to continue')
                
if(ch==5):
         break
                
else:
      print('Enter between 1 and 5')
           
