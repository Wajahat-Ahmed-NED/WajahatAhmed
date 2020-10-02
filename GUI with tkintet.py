from tkinter import*
m=Tk()
m.title("MY SOFTWARE")
f=Frame(m,bg="orange",height=40)
f.pack(side="top",fill="x")
l=Label(f,text="WELCOME TO MY SOFTWARE",bg="ORANGE").grid(row=0,column=0,pady=10)
m.mainloop()