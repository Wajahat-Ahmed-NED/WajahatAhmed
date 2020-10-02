class Employee:
    no_of_employees=0
    def __init__(self,fname,lname,salary):
        self.fname=fname
        self.lname=lname
        self.salary=salary
        Employee.no_of_employees+=1
    increment=1.5
    def increase(self):
        self.salary=int(self.salary*self.increment)
class Programmer(Employee):
    def __init__(self,fname,lname,salary,proglang,exp):
        super().__init__(fname,lname,salary)
        self.proglang=proglang
        self.exp=exp
    def increase(self):
        self.salary*=(self.increment+0.2)

harry=Programmer("Harry","jack",78000,"Python","5 year")
harry.increase()
print(harry.increment)
print(harry.no_of_employees)
# if object is not a programmer but he is a normal worker
rohan=Employee("Rohan","das",94000)
rohan.increase()
print(rohan.salary)
