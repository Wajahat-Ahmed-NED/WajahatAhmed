import random
from tkinter import*
ran=random.randint(1,10)
print("Guess a number ",ran)



def guess():

    i=0
    while i<=3:
        if i==3:
            i=i+1
            e3.delete(0,"end")
            continue
        ans = e3.get()

        if int(ans)==ran :
            l4.config(text="Congratulations you have won")
            break
        elif int(ans)>ran:
            e3.delete(0, "end")
            l4.config(text="Guess smaller number")

        else:
            e3.delete(0, "end")
            l4.config(text="Guess larger number")
        i=i+1

m=Tk()
m.title("Guessing game")
l=Label(m,text="Welcome to guessing game",bg="black",fg="white",width=20,height=3).pack(side="top",fill="x")
f=Frame(m,bd=20,bg="brown")
f.place(x=25,y=100,width=1300,height=550)

l2=Label(f,text="You have 3 chances",width=30)
l2.grid(row=0,column=0)
l3=Label(f,text="Guess a number from 1 to 10")
l3.grid(row=1,column=0,pady=20)
e3=Entry(f)
e3.grid(row=1,column=1,pady=20)

b1=Button(f,text="submit",command=guess)
b1.grid(row=1,column=2,pady=20,padx=20)
l4=Label(f,bg="brown",font=("new times Roman",40))
l4.grid(row=3,column=0,pady=20)


m.mainloop()