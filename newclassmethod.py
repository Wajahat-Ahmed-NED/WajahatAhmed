class Employee:
    increment=1.5
    no_of_employees=0
    def __init__(self,fname,lname,salary):
        self.fname=fname
        self.lname=lname
        self.salary=salary
        Employee.no_of_employees+=1
    def increase(self):
        self.salary*=self.increment
    @classmethod
    def change_increment(cls,amount):
        cls.increment=amount
harry=Employee("Harry","Jack",1500000)
rohan=Employee("Rohan","Das",1500000)
print(harry.salary)
Employee.change_increment(2)
harry.increase()
print("The new salary of harry is" ,harry.salary)
