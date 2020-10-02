class Myemployee:
    def __init__(self,fnaem,lname,cnic,email,address,salary,post):
        self.firstname=fnaem
        self.lname=lname
        self.cnic=cnic
        self.email=email
        self.address=address
        self.salary=salary
        self.post=post
ali=Myemployee("Ali","Khan","42102156578687","alikhan@gmail.com","karachi","4500000","officer")
umar=Myemployee("umar","ahmed","42105604504763","umarahmed@gmail.com","Lahore","500000","Manager")
print(ali.salary)
# if ali is leaving
del ali
umar.email="muhammadumar@gmail.com"
print(umar.email)