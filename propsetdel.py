class Employee:
    def __init__(self,fname,lname,salary):
        self.fnaem=fname
        self.lname=lname
        self.salary=salary
        self.email=fname+lname+"@gmail.com"

mola=Employee("mola","jee",58600)
print(mola.email)
mola.lname="zee"# will not change the email because the email has already been created from previous name
print(mola.lname)
mola.email="molazee@gmail.com"
print(mola.email)
#----------If lname changes then follow this program---------#
class Employee:
    def __init__(self,fname,lname,salary):
        self.fname=fname
        self.lname=lname
        self.salary=salary
    def email(self):
        return self.fname+self.lname+"@gmail.com"

mola=Employee("mola","jee",578650)
print(mola.email())
mola.lname="zee"
print(mola.email())

#-------if lname becomes fname then --------#
class Employee:
    def __init__(self,fname,lname,salary):
        self.fname=fname
        self.lname=lname
        self.salary=salary
    @property
    def email(self):
        if self.fname==None:
            return "Email not edit"
        else:
            return self.fname+"."+self.lname+"@gmail.com"
    @email.setter
    def email(self,given_email):
        name=given_email.split("@")[0].split(".")
        self.fname=name[0]
        self.lname=name[1]
    @email.deleter
    def email(self):
        self.fname=None
        self.lname=None
mola=Employee("Mola","jee",540000)
mola.lname="zeede"
print(mola.email)
mola.email="zede.mola@gmail.com"
print(mola.email)

del mola.email
print(mola.email)

