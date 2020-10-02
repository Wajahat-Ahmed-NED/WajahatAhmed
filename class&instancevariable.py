class Employee:#always make first word capital of class b\c good practice and useful in opensource
    off=8
    pass
waji=Employee()
ali=Employee()

waji.name="Wajahat"
waji.post=21
waji.age=34

ali.name="Ali"
ali.post=20
ali.age=34

print(waji.name,ali.name)

ali.off=9# cannot change the value of class object , ali.off will become its instance variable
print(Employee.off)
print(ali.__dict__)#used to display data in dictionary
Employee.off=10
print(Employee.off) # class object can only be changed by class only not by objects