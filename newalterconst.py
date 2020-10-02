class Employee:
    no_of_emp=0
    def __init__(self,fname,lname,salary):
        self.fname=fname
        self.lname=lname
        self.salary=salary
        Employee.no_of_emp+=1
    @classmethod

    def from_str(cls,emp_str):
        fname,lname,salary=emp_str.split("-")
        return cls(fname,lname,salary)
lovish=Employee.from_str("lovish-roy-75000")

print(lovish.fname," ",lovish.lname," ",lovish.salary)
print(lovish.no_of_emp)
