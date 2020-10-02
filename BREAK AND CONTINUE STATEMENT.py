i=0
while True:
    if i+1<=5:
        i+=1
        continue
    print(i+1,end=" ")
    if i==45:

        break
    i=i+1


while True:
    ans = int(input(" Enter any number to check"))
    if ans>100:
        print("congratulations you entered greater than 100")
        break
    else:
        print("enter greater than",ans)
