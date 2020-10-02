class Employee:
    def __init__(self,fname,lname,salary):
        self.fname=fname
        self.lname=lname
        self.salary=salary

class Programmer(Employee):
    def __init__(self,fname,lname,salary,language):
        self.fname=fname
        self.lname=lname
        self.salary=salary
        self.language=language
    def printprog(self):
        return f"The name of programmer is{self.fname}{self.lname} and salary is{self.salary}"
    def better_prog(self):
        if "Python" in self.language:
            return "The best programmer"
        else:
            return "The better programmer"

harry=Employee("Harry","jack",7658)
rohan=Employee("Rohan","Das",7008)

shubam=Programmer("Shubam","khor",6742,"[c#]")
sagar=Programmer("Sagar","Dan",5185,"[Python,cpp]")
print(sagar.fname,sagar.lname,sagar.salary,sagar.language)
print(f"The name is {sagar.fname}{sagar.lname}")
print(shubam.printprog())
print(shubam.better_prog())
print(sagar.better_prog())