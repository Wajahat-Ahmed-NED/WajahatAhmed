#mutable =can change
#immutable= cannot change
grocery=["harpic","max bar","detergent","lolly pop","bhindi"]
print(grocery)
numbers=[1,9,5,7,6,1,5]
print(numbers[0])
numbers.sort()
print(numbers)
numbers.reverse()
print(numbers)
numbers.sort(reverse=True)
print(numbers)
print(numbers[0:])
numbers.sort()
print(numbers[0:5])#or print(numbers[:5]) both are same
print(numbers[:])#will print whole list from index 0 till end
print(numbers[1:])#will print all elements of list excluding 0th index
print(numbers[::])# = print([::1])known as extending slice.It will print whole list
print(numbers[::2])#will skip 1 number and don't take negative number in third parameter
numbers.remove(5)#will remove 5 from the list
print(numbers)
numbers.pop()# will remove the last element of the list
print(numbers)
numbers[1]=23# will change the number of index 1
print(numbers)

t1=(1,2,3)
print(t1)
#t1[0]=2 This will not run as tuple is immutable
t2=(1)#This is not tuple as we assume that ase hi lagadiya bracket lazmi ha ka  comma bhi lagao
t3=(1,)#Now this is tuple for 1 element
#Swapping
a=1
b=9
temp=a
a=b
b=temp
print(a, b)
# or using short method
a,b=b,a
print(a, b)