grade=int(input("enter your grade"))
salary=int(input("enter your salary"))
if(grade>=1 and grade<=16):
    inc=salary+20/100*salary
    print("your present salary is",inc)
elif(grade>=17 and grade<=19):
    inc=salary+10/100*salary
    print("your present salary is",inc)
elif(grade>=20 and grade<=22):
    inc=salary+5/100*salary
    print("your present salary is",inc)
else:
    print("please enter a valid grade this grade doesn't exist")