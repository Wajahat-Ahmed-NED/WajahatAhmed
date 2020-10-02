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
print(Employee.no_of_employees)
harry=Employee("harry","Jack",50000)
rohan=Employee("Rohan","Das",50000)
print("Current salary is ",rohan.salary)
rohan.increase()
print("Salary after increment is ",rohan.salary)
print(Employee.no_of_employees)
