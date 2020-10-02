class Employee1:
    def __init__(self,fname,lname,salary):
        self.fname=fname
        self.lname=lname
        self.salary=salary

harry=Employee1("Harry","Jack",100000)
rohan=Employee1("Rohan","Das",100000)

print(rohan.salary)
print(harry.fname)

class Employee:
    pass
harry=Employee()
rohan=Employee()

harry.fname="harry"
harry.lname="jack"
harry.salary=50000

rohan.fname="rohan"
rohan.lname="das"
rohan.salary=50000

print(harry,rohan)
print(harry.lname)

