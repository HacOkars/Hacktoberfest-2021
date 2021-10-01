from tkinter import *
from tkinter import messagebox as mb
from tkinter import font as ft
def changecolor(x,y,z):
    x['bg']='cyan'
    z['bg']='cyan'
    y['bg']='cyan'
def onClick(b):
    global turn
    global player
    global count
    if b['text']!=' ':
        mb.showinfo("Try Again","This place is already filled.\nPlease try again.")
    if player==1 and b['text']==' ':
        b['text']=turn
        turn="O"
        player=2
        count+=1
        if b1['text']==b2['text']==b3['text']=='X':
            changecolor(b1,b2,b3)
            mb.showinfo("Game Over","Player 1 won!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
        elif b4['text']==b5['text']==b6['text']=='X':
            changecolor(b4,b5,b6)
            mb.showinfo("Game Over","Player 1 won!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
        elif b7['text']==b8['text']==b9['text']=='X':
            changecolor(b7,b8,b9)
            mb.showinfo("Game Over","Player 1 won!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
        elif b1['text']==b4['text']==b7['text']=='X':
            changecolor(b1,b4,b7)
            mb.showinfo("Game Over","Player 1 won!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
        elif b2['text']==b5['text']==b8['text']=='X':
            changecolor(b2,b5,b8)
            mb.showinfo("Game Over","Player 1 won!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
        elif b3['text']==b6['text']==b9['text']=='X':
            changecolor(b3,b6,b9)
            mb.showinfo("Game Over","Player 1 won!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
        elif b1['text']==b5['text']==b9['text']=='X':
            changecolor(b1,b5,b9)
            mb.showinfo("Game Over","Player 1 won!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
        elif b3['text']==b5['text']==b7['text']=='X':
            changecolor(b3,b5,b7)
            mb.showinfo("Game Over","Player 1 won!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
        elif count==9:
            mb.showinfo("Game Over","Match Tie!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
    elif player==2 and b['text']==' ':
        b['text']=turn
        turn="X"
        player=1
        count+=1
        if b1['text']==b2['text']==b3['text']=='O':
            changecolor(b1,b2,b3)
            mb.showinfo("Game Over","Player 2 won!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
        elif b4['text']==b5['text']==b6['text']=='O':
            changecolor(b4,b5,b6)
            mb.showinfo("Game Over","Player 2 won!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
        elif b7['text']==b8['text']==b9['text']=='O':
            changecolor(b7,b8,b9)
            mb.showinfo("Game Over","Player 2 won!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
        elif b1['text']==b4['text']==b7['text']=='O':
            changecolor(b1,b4,b7)
            mb.showinfo("Game Over","Player 2 won!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
        elif b2['text']==b5['text']==b8['text']=='O':
            changecolor(b2,b5,b8)
            mb.showinfo("Game Over","Player 2 won!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
        elif b3['text']==b6['text']==b9['text']=='O':
            changecolor(b3,b6,b9)
            mb.showinfo("Game Over","Player 2 won!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
        elif b1['text']==b5['text']==b9['text']=='O':
            changecolor(b1,b5,b9)
            mb.showinfo("Game Over","Player 2 won!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
        elif b3['text']==b5['text']==b7['text']=='O':
            changecolor(b3,b5,b7)
            mb.showinfo("Game Over","Player 2 won!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
        elif count==9:
            mb.showinfo("Game Over","Match Tie!")
            b1['command']='None'
            b2['command']='None'
            b3['command']='None'
            b4['command']='None'
            b5['command']='None'
            b6['command']='None'
            b7['command']='None'
            b8['command']='None'
            b9['command']='None'
def reset():
    global count
    count=0
    global player
    player=1
    global turn
    turn="X"
    b1['text']=' '
    b2['text']=' '
    b3['text']=' '
    b4['text']=' '
    b5['text']=' '
    b6['text']=' '
    b7['text']=' '
    b8['text']=' '
    b9['text']=' '
    b1['command']=lambda:onClick(b1)
    b2['command']=lambda:onClick(b2)
    b3['command']=lambda:onClick(b3)
    b4['command']=lambda:onClick(b4)
    b5['command']=lambda:onClick(b5)
    b6['command']=lambda:onClick(b6)
    b7['command']=lambda:onClick(b7)
    b8['command']=lambda:onClick(b8)
    b9['command']=lambda:onClick(b9)
    b1['bg']='light blue'
    b2['bg']='light green'
    b3['bg']='light blue'
    b4['bg']='light green'
    b5['bg']='light blue'
    b6['bg']='light green'
    b7['bg']='light blue'
    b8['bg']='light green'
    b9['bg']='light blue'    
def contact():
    mb.showinfo("Contact Us","Mobile number: 9476463656\nE-mail ID: sambhavbelda@gmail.com")      
win=Tk()
win.configure(bg='light grey')
win.title('Tic-Tac-Toe by Sambhav')
win.geometry('530x575')
win.minsize(530,575)
win.iconbitmap(r"favicon.ico")
menu=Menu(win,bd=5)
win.config(menu=menu)
filemenu=Menu(menu)
menu.add_cascade(label='File',menu=filemenu)
filemenu.add_command(label='New',command=reset) 
filemenu.add_separator() 
filemenu.add_command(label='Exit',command=win.destroy)
helpmenu=Menu(menu)
menu.add_cascade(menu=helpmenu,label='Help')
helpmenu.add_command(label='About')
helpmenu.add_command(label='Contact Us',command=contact)
b=StringVar('')
frame1=Frame(win,height=200,width=200)
frame1.pack(side=TOP)
frame2=Frame(win,height=200,width=200)
frame2.pack(side=TOP)
frame3=Frame(win,height=200,width=200)
frame3.pack(side=TOP)
turn="X"
player=1
count=0
style=ft.Font(size=70)
b1=Button(frame1,text=' ',width=3,activebackground='white',activeforeground='black',bg='light blue',foreground='black',command=lambda:onClick(b1))
b1['font']=style
b1.pack(side=LEFT)
b2=Button(frame1,text=' ',width=3,activebackground='white',activeforeground='black',bg='light green',foreground='black',command=lambda:onClick(b2))
b2['font']=style
b2.pack(side=LEFT)
b3=Button(frame1,text=' ',width=3,activebackground='white',activeforeground='black',bg='light blue',foreground='black',command=lambda:onClick(b3))
b3['font']=style
b3.pack(side=LEFT)
b4=Button(frame2,text=' ',width=3,activebackground='white',activeforeground='black',bg='light green',foreground='black',command=lambda:onClick(b4))
b4['font']=style
b4.pack(side=LEFT)
b5=Button(frame2,text=' ',width=3,activebackground='white',activeforeground='black',bg='light blue',foreground='black',command=lambda:onClick(b5))
b5['font']=style
b5.pack(side=LEFT)
b6=Button(frame2,text=' ',width=3,activebackground='white',activeforeground='black',bg='light green',foreground='black',command=lambda:onClick(b6))
b6['font']=style
b6.pack(side=LEFT)
b7=Button(frame3,text=' ',width=3,activebackground='white',activeforeground='black',bg='light blue',foreground='black',command=lambda:onClick(b7))
b7['font']=style
b7.pack(side=LEFT)
b8=Button(frame3,text=' ',width=3,activebackground='white',activeforeground='black',bg='light green',foreground='black',command=lambda:onClick(b8))
b8['font']=style
b8.pack(side=LEFT)
b9=Button(frame3,text=' ',width=3,activebackground='white',activeforeground='black',bg='light blue',foreground='black',command=lambda:onClick(b9))
b9['font']=style
b9.pack(side=LEFT)
lastframe=Frame(win,height=200,width=200)
lastframe.pack(side=TOP)
b10=Button(lastframe,text='Reset/Replay',width=10,activebackground='white',activeforeground='black',bg='POWDER blue',foreground='black',command=reset)
b10.pack(side=LEFT)
b11=Button(lastframe,text='Quit',width=10,activebackground='white',activeforeground='black',bg='powder blue',foreground='black',command=win.destroy)
b11.pack(side=RIGHT)

win.mainloop()
