def printfunc(str):
    return f"my name is {str}"
def printfunc2(num1,num2):
    return num1+num2


if __name__ == '__main__':# only executed when this file executes and not executed in other file
    print(printfunc("wajahat"))
    obj=printfunc2(2,4)
    print(obj)


def printfunc(str):
    return f"my name is {str}"
def printfunc2(num1,num2):
    return num1+num2

print("The name is ",__name__)# __name has the value of main only in this file
if __name__ == '__main__':# only executed when this file executes and not executed in other file
    print(printfunc("wajahat"))
    obj=printfunc2(2,4)
    print(obj)