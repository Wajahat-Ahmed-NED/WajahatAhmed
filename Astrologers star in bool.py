ROWS= int(input("Enter no. of Rows You Want To Print"))

bol = int(input("Type 1 Or 0"))
new =bool(bol)
if new == True:
    for i in range(1,ROWS+1):
        for j in range(1,i+1):
            print("*",end=" ")
        print()
elif new ==False:
    for i in range(ROWS,0,-1):
        for j in range(1,i+1):
            print("*", end="")
        print()
