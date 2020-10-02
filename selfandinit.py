class Employee:
    off=8
    def func1(self):# self object ko as a argument lega
        return f"name is {self.name}, post  is{self.post} and age is {self.age}"


waji=Employee()
ali=Employee()

waji.name="Wajahat"
waji.post=21
waji.age=34

ali.name="Ali"
ali.post=20
ali.age=34


print(waji.func1())

class Employee1:
#class ko argument dene ke tariaq ko constructor kehte han
    def __init__(self,name1,post1,age1):
        self.name=name1
        self.post=post1
        self.age=age1


    def func1(self):# self object ko as a argument lega
        return f"name is {self.name}, post  is{self.post} and age is {self.age}"


waji=Employee1("ali",21,23)#class ke argumets are handled by init function
print(waji.name)