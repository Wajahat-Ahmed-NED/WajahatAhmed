# def funcarg(args):# args is used to print names which are increasing continuously
#     print(type(args))# by default list ko bhi tuple ki form ma leta ha
#     for i in args:
#         print(i)
# hrs=["ali","hamza","anna","mubeen"]
# funcarg(hrs)

class Employee1:
    no_of_leaves=2
#class ko argument dene ke tariaq ko constructor kehte han
    def __init__(self,name1,post1,age1):
        self.name=name1
        self.post=post1
        self.age=age1


    def func1(self):# self object ko as a argument lega
        return f"name is {self.name}, post  is{self.post} and age is {self.age}"

    @classmethod
    def change_no_leaves(cls,leaves):# cls will take class as a input while self takes object as a input
        cls.no_of_leaves=leaves# can be access by class and instance variable
    @classmethod
    def form_dash(cls,string):
        return cls(*string.split("-"))
waji=Employee1("wajahat",21,23)#class ke argumets are handled by init function
print(waji.name)

ali=Employee1("ali",21,23)#class ke argumets are handled by init function
print(ali.name)
kha=Employee1.form_dash("wajahat-233-student")
ali.change_no_leaves(32)# no of leaves will be changed through function which can be access by both class and objects
print(ali.no_of_leaves)
print(kha.age)

