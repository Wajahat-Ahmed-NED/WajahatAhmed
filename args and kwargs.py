def funcarg(*args):
    print(type(args))# by default list ko bhi tuple ki form ma leta ha
    print(args[0])
hrs=["ali","hamza","anna","mubeen"]
funcarg(*hrs)

def funcarg(*args):# args is used to print names which are increasing continuously
    print(type(args))# by default list ko bhi tuple ki form ma leta ha
    for i in args:
        print(i)
hrs=["ali","hamza","anna","mubeen"]
funcarg(*hrs)

def funcarg(normal,*args):# args is used to print names which are increasing continuously
    print(type(args))
    print(normal)# by default list ko bhi tuple ki form ma leta ha
    for i in args:
        print(i)
hrs=["ali","hamza","anna","mubeen"]

normal="I am a normal argument and the students are"
funcarg(normal,*hrs)# normal ko always *args se pehle dalna ha

def funcarg(*args):# args is used to print names which are increasing continuously
    print(type(args))# by default list ko bhi tuple ki form ma leta ha
    for i in args:
        print(i)
hrs=["ali","hamza","anna","mubeen"]
funcarg()# args and **kwargs is optional not necessary to give it argument

def funcarg(normal,*args,**kwargs):# args is used to print names which are increasing continuously
    print(normal)# **kwargs is used for dictionary
    print(type(args))# by default list ko bhi tuple ki form ma leta ha
    for i in args:
        print(i)
    for i,j in kwargs.items():
        print(f"{i} is {j}")

kw={"ali":"monitor",
    "waji":"Prefect","khalid":"coordinator","shahi":"Cook"}
hrs=["ali","hamza","anna","mubeen"]
normal="hey"
funcarg(normal,*hrs,**kw)