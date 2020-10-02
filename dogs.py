# class Dog():
#     """A simple attempt to model a dog"""
#     def __init__(self,name,age):
#         #initialize name and attributes
#         self.name=name
#         self.age=age
#
#     def sit(self):
#         """Stimulate a dog sitting in response to a command"""
#         print(self.name.title()+"is now sitting")
#     def roll_over(self):
#         """stimulate a dog rolled over on a command"""
#         print( self.name.title()+"rolled over")
#
# doggy=Dog("Puppy","2 months")
# doggy.sit()
# doggy.roll_over()
#
# print("My dog name is"+doggy.name.title())
# print("My dog's age is "+doggy.age+"Years")
#
# your_dog=Dog("Lucy","3 months")
# your_dog.sit()
# your_dog.roll_over()
#
# print("Your dog's name is "+your_dog.name.title())
# print("Your dog's age is "+your_dog.age)
#
# #------Try it for yourself------#
# class Restaurant():
#     def __init__(self,name,food):
#         self.name=name
#         self.food_niche=food
#     def describe_restaurant(self):
#         print("The name of restaurant is "+self.name+"and provides "+self.food_niche)
#     def open_restaurant(self):
#         print("Restaurant is giving 24 hours services .\n We are not having any holiday")
#
#
# this_restaurant=Restaurant("Tayyabi","BBQ")
# print(this_restaurant.name)
# print(this_restaurant.food_niche)
#
# this_restaurant.describe_restaurant()
# this_restaurant.open_restaurant()
#
# restaurant1=Restaurant("Bolan","BBQ")
# restaurant2=Restaurant("Javed Nihari","Nihari")
#
# restaurant1.describe_restaurant()
# restaurant2.describe_restaurant()
#
# restaurant1.open_restaurant()
# restaurant2.open_restaurant()
#
# class User():
#     def __init__(self,fname,lname,age,qualification,status,cnic):
#         self.fname=fname
#         self.lname=lname
#         self.age=age
#         self.qualification=qualification
#         self.status=status
#         self.cnic=cnic
#     def describe_person(self):
#         print(f"The name of this person is {self.fname}{self.lname} , age is {self.age},qualifictaion is{self.qualification},status is{self.status} and cnic is{self.cnic} ")
#
#     def greet_user(self):
#         print(f"Congratzulations you are a {self.status} ")

#
# person1=User("Wajahat","Ahmed","18","Undergraduate","student","4210180566579")
# person1.describe_person()
# person1.greet_user()
#
# class Car():
#     """A simple attempt to represent a car."""
#     def __init__(self,make,model,year):
#         """Initialize attributes to describe a car."""
#         self.make=make
#         self.model=model
#         self.year=year
#         self.odo_meter=0
#     def get_description(self):
#         """Return a neatly formatted descriptive name."""
#         long_name=str(self.year)+" "+self.make+" "+self.model
#         return long_name
#     def read_odometer(self):
#         odometer="This is my car having "+str(self.odo_meter)+" "+"miles per hour"
#         return odometer
#     def update_odometer(self,mileage):
#         if mileage>=self.odo_meter:
#             self.odo_meter=mileage
#         else:
#             print("You cannot roll back the odometer")
#     def increment_odometer(self,increments):
#         if increments>=0:
#             self.odo_meter+=increments
#         else:
#             print("negative increments are not allowed")
# mycar=Car("audi","a9","2020")
# print(mycar.get_description())
# print(mycar.read_odometer())
# #To change attribute's value there are 3 methods
# #No.1
# mycar.odo_meter=23
# print(mycar.read_odometer())
# #No.2 Update through a method
# mycar.update_odometer(25)
# print(mycar.odo_meter)
#  #update in a method
# mycar.update_odometer(-1)
# print(mycar.odo_meter)
#  #increment in a method
# mycar.increment_odometer(56)
# print(mycar.odo_meter)
#
# mycar.increment_odometer(-45)
#
# #---Try it for yourself----#
# class Restaurant1():
#     def __init__(self,name,food):
#         self.name=name
#         self.number_served=0
#         self.food_niche=food
#     def describe_restaurant(self):
#         print("The name of restaurant is "+self.name+"and provides "+self.food_niche)
#     def open_restaurant(self):
#         print("Restaurant is giving 24 hours services .\n We are not having any holiday")
#     def set_number_served(self,number):
#         self.number_served=number
#     def increment_number_served(self,number):
#         self.number_served+=number
# myres=Restaurant1("Bolan","BBQ")
# print(myres.number_served)
# myres.set_number_served(45)
# print(myres.number_served)
# myres.increment_number_served(45)
# print(myres.number_served)
#
# class User1():
#     def __init__(self,fname,lname,age,qualification,status,cnic):
#         self.fname=fname
#         self.lname=lname
#         self.age=age
#         self.qualification=qualification
#         self.status=status
#         self.cnic=cnic
#         self.login_attemts=0
#     def describe_person(self):
#         print(f"The name of this person is {self.fname}{self.lname} , age is {self.age},qualifictaion is{self.qualification},status is{self.status} and cnic is{self.cnic} ")
#
#     def greet_user(self):
#         print(f"Congratzulations you are a {self.status} ")
#     def increment_login_attempts(self,number):
#         self.login_attemts+=number
#     def reset_login_attempts(self):
#         self.login_attemts=0
# myuser=User1("wajahat","ahmed","18","Undergraduate","student","4210180566579")
# print(myuser.login_attemts)
# myuser.increment_login_attempts(1)
# myuser.increment_login_attempts(1)
# myuser.increment_login_attempts(1)
# myuser.increment_login_attempts(1)
# myuser.increment_login_attempts(1)
# myuser.increment_login_attempts(1)
# print(myuser.login_attemts)
# myuser.reset_login_attempts()
# print(myuser.login_attemts)
#---End with page 171----#
#---Inheritence---#
# class Car():
#     """A simple attempt to represent a car."""
#     def __init__(self,make,model,year):
#         """Initialize attributes to describe a car."""
#         self.make=make
#         self.model=model
#         self.year=year
#         self.odo_meter=0
#     def get_description(self):
#         """Return a neatly formatted descriptive name."""
#         long_name=str(self.year)+" "+self.make+" "+self.model
#         return long_name
#     def read_odometer(self):
#         odometer="This is my car having "+str(self.odo_meter)+" "+"miles per hour"
#         return odometer
#     def update_odometer(self,mileage):
#         if mileage>=self.odo_meter:
#             self.odo_meter=mileage
#         else:
#             print("You cannot roll back the odometer")
#     def increment_odometer(self,increments):
#         if increments>=0:
#             self.odo_meter+=increments
#         else:
#             print("negative increments are not allowed")
#     def fill_gas_tank(self):
#         print("Sir some of the cars offer fill_gas_tank property")
# class Battery():
#     def __init__(self,battery_size=70):
#         self.battery_size=battery_size
#
# class Electric_car(Car):
#     def __init__(self,make,model,year):
#
#         super().__init__(make,model,year)
#         self.batterysize=430
#     def describe_battery(self):
#         print("The battery of electric car is "+ str(self.batterysize))
#     def fill_gas_tank(self):
# #         print("Sorry sir Electric car has no property of fill_gas_tank")
# mynewcar=Electric_car("toyota","2374","2020")
# print(mynewcar.get_description())
# mynewcar.describe_battery()
# mynewcar.fill_gas_tank()

#
# class Car():
#     """A simple attempt to represent a car."""
#
#     def __init__(self, make, model, year):
#         """Initialize attributes to describe a car."""
#         self.make = make
#         self.model = model
#         self.year = year
#         self.odo_meter = 0
#
#     def get_description(self):
#         """Return a neatly formatted descriptive name."""
#         long_name = str(self.year) + " " + self.make + " " + self.model
#         return long_name
#
#     def read_odometer(self):
#         odometer = "This is my car having " + str(self.odo_meter) + " " + "miles per hour"
#         return odometer
#
#     def update_odometer(self, mileage):
#         if mileage >= self.odo_meter:
#             self.odo_meter = mileage
#         else:
#             print("You cannot roll back the odometer")
#
#     def increment_odometer(self, increments):
#         if increments >= 0:
#             self.odo_meter += increments
#         else:
#             print("negative increments are not allowed")
#
#     def fill_gas_tank(self):
#         print("Sir some of the cars offer fill_gas_tank property")
#
#
# class Battery():
#     def __init__(self, battery_size=70):
#         self.battery_size = battery_size
#     def describe_battery(self):
#         print("This battery is of this size" + str(self.battery_size))
#     def get_range(self):
#
#         if self.battery_size==70:
#             range=250
#         elif self.battery_size==85:
#             range=270
#         message="This is the range of car "+ str(range)
#         message+="Can run very fast"
#         print(message)
#
# class Electric_car(Car):
#     def __init__(self, make, model, year):
#         super().__init__(make, model, year)
#         self.battery = Battery()
#
#     def fill_gas_tank(self):
#         print("Sorry sir Electric car has no property of fill_gas_tank")
# mytesla=Electric_car("Wajahat","dh342",2020)
# mytesla.battery.describe_battery()
# mytesla.battery.get_range()
# mytesla.battery=Battery(356)
# print(mytesla.battery.battery_size)
# mytesla.fill_gas_tank()
# print(mytesla.battery.battery_size)
class Restaurant1():
    def __init__(self,name,foodniche):
        self.name=name
        self.number_served=0
        self.food_niche=foodniche
    def describe_restaurant(self):
        print("The name of restaurant is "+self.name+"and provides "+self.food_niche)
    def open_restaurant(self):
        print("Restaurant is giving 24 hours services .\n We are not having any holiday")
    def set_number_served(self,number):
        self.number_served=number
    def increment_number_served(self,number):
        self.number_served+=number
class Icecreamstand(Restaurant1):
    def __init__(self,name,foodniche):
        super().__init__(name,foodniche)
        self.flavour=["orange","peach","mango","pista","kulfa"]
    def describe_flavour(self):
        print("This icecreame stand include these flavours " + str(self.flavour))
icecreame=Icecreamstand("icecreame","eatting")
print(icecreame.describe_flavour())
print(icecreame.name)
print(icecreame.food_niche)
#
# class User():
#     def __init__(self,fname,lname):
#         self.fname=fname
#         self.lname=lname
#
#     def describe_person(self):
#         print(f"The name of this person is {self.fname}{self.lname} , age is {self.age},qualifictaion is{self.qualification},status is{self.status} and cnic is{self.cnic} ")
#
#     def greet_user(self):
#         print(f"Congratzulations you are a {self.fname} ")
# class Admin(User):
#     def __init__(self,fname,lname):
#         super().__init__(fname,lname)
#         self.privileges=["can be an admin","can be a user","can post","can do anything to group"]
#     def show_privileges(self):
#         return f"The Admin has the following privileges {self.privileges}"
# new_admin=Admin("wajahat","ahmed")
# print(new_admin.privileges)
# print(new_admin.show_privileges())


class User():
    def __init__(self,fname,lname):
        self.fname=fname
        self.lname=lname

    def describe_person(self):
        print(f"The name of this person is {self.fname}{self.lname} , age is {self.age},qualifictaion is{self.qualification},status is{self.status} and cnic is{self.cnic} ")

    def greet_user(self):
        print(f"Congratzulations you are a {self.fname} ")
class privileges():
    def __init__(self,new="can be a admin"):
        self.privileges=[new,"can be a user","can post","can do anything to group"]
    def show_privileges(self):
        return f"The Admin has the following privileges {self.privileges}"

class Admin(User):
    no=24
    def __init__(self,fname,lname):
        super().__init__(fname,lname)
        self.privileges=privileges()
    def func(self):
        print("Hello")
new_admin=Admin("wajahat","ahmed")
print(new_admin.privileges)
print(new_admin.privileges.show_privileges())
new_admin.privileges=privileges("Hello")
new_admin.func()
print(new_admin.privileges.show_privileges())
second_admin=Admin("Wajahat","ali")
print(second_admin.privileges.show_privileges())
Admin.privileges=privileges("Salam")
print(second_admin.privileges.show_privileges())

Admin.no=85
print(Admin.no)

