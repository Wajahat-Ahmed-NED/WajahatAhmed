path="C:\\Users\\DELL\\Downloads\\wajahat.txt"
file=open(path,"r")
content=file.read()
print(content)
print(file.tell())
file.seek(2,0)
content=file.readline()
print(content)

path="C:\\Users\\DELL\\Downloads\\wajahat.txt"
file=open(path,"r")
cont=file.readlines()
print(cont)
path="C:\\Users\\DELL\\Downloads\\wajahat.txt"
file=open(path,"r")
for con in file.read():
    print(con,end="")

path="C:\\Users\\DELL\\Downloads\\wajahat.txt"
file=open(path,"r")
conten=file.read(10)
print(conten)
conten=file.read(10)
print(conten)

path="C:\\Users\\DELL\\Downloads\\wajahat.txt"
file=open(path,"r")
cont=file.readline()
print(cont)
cont=file.readline()
print(cont)

f=open("C:\\Users\\DELL\\Downloads\\muzammil.txt","w")
content="assalamoalaikum my name is wajahat"
f.write(content)
print("DONE, SUCCESSFULLY")

f=open("C:\\Users\\DELL\\Downloads\\muzammil.txt","a")
content="\ni am a student of software engineering"
f.write(content)
print("DONE, SUCCESSFULLY")

f=open("wajo.txt","x")
print("success")

import os
os.rename("wajo.txt","C:\\Users\\DELL\\Downloads\\wajo.txt")
print('good')
