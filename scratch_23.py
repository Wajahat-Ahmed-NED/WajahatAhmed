def fact1(n):
    fact=1
    for i in range(1,n+1):
        fact=fact*i
    return fact
for j in range(1,10):
    print(j,"!\t","=\t",fact1(j))