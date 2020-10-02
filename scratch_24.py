no=int(input("enter your number"))
def fact1(no):
    if (no==1):
        return 1
    else:
        return no*fact1(no-1)
if (no==0 or no==1):
    print(no,"\t=",1)
elif(no<0):
    print("can't calculate the factorial of -ve no")
else:
    print(no,"!\t=",fact1(no))