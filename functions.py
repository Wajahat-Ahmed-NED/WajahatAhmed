def times():
    import datetime
    return datetime.datetime.now()
print(times())



a=8
b=3
c=sum((a,b))#built in function
print(c)

# user defined function
def func1():#this function is not taking any input
    print("hello waji bhai")
func1()

def func2(a,b):
    average=(a+b)/2
    print(average)
func2(2,4)



def func2(a,b):
    average=(a+b)/2
    print(average)
v=func2(2,4)
print(v)#This will print None because function is not returing anything


def func2(a,b):
    """This function will calculate the average of two numbers.It will not calculate
    for more than 2 numbers"""
    average=(a+b)/2
    print(average)
    return average
v=func2(2,4)
print(func2(2,4).__doc__)
print(v)#Now will print average value because of returning


def func2(a,b):
    """This function will calculate the average of two numbers.It will not calculate
    for more than 2 numbers"""
    average=(a+b)/2
    print(average)
    return average
print(func2.__doc__)#will return the only doc string

