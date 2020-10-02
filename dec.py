#DECORATORS MODIFY THE FUNCTION

# def func1():
#     print("Subscribe Now")
# func2=func1
# del func1# will print subscribe now because copy of func1 has been created
# func2()
#
# def executor(func):# function ko function ma return kia ha
#     func("hello world")
# executor(print)
#
# def un(num):
#     if num==0:
#         return print# will tell that it is built in function
#     elif num==1:
#         return sum
# print(un(1))

def dec1(func1):
    def rexecutor():
        print("Executing")
        func1()
        print("Executed")
    return rexecutor

def whiel():
    print("Wajahat is a good boy")
whiel=dec1(whiel)
whiel()
# OR
@dec1# This method will sandwich between the dec1 method this is method for calling the function within a function
def whiel():
    print("Wajahat is a good boy")
whiel()
