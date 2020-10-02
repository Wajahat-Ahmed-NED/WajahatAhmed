class Employee:
    def __init__(self,fname,lname,salary):
        self.fname=fname
        self.lname=lname
        self.salary=salary


class Programmer(Employee):
    def __init__(self,fname,lname,salary,proglang,exp):
        super().__init__(fname,lname,salary)
        self.proglang=proglang
        self.exp=exp

objec=Programmer("wajahat","ahmed",548654435,567,67534)
print(objec.fname)