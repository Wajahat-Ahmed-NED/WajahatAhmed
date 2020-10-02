
l4=[]
for x in range(1,11):
    l4.insert(x,x)
print(l4)

for x in range(0,10):
    l4.insert(x,x**2)
    print("l4[",x,"]=",l4[x])

def max1(arr,s):
    m=arr[0]
    for i in range(0,s):
        if arr[i]>m:
            m=arr[i]
    return m
l1=[2,5,73,3,0]
size=len(l1)
print("the largest element in array is",max1(l1,size))

l4=[]
for x in range(1,11,2):
    l4.insert(x,x)
print(l4)

l1=[39,4,6,2,78,5]
x=len(l1)
for i in range(0,x):
    for j in range(i+1,x):
        if(l1[i]<l1[j]):
            temp=l1[j]
            l1[j]=l1[i]
            l1[i]=temp
print(l1)

