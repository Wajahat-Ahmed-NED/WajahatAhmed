
def fact1(no):
    if (no==1):
        return 1
    else:
        return no*fact1(no-1)
for i in range(1,10):
    print(i,"!\t",fact1(i))