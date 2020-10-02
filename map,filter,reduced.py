lis=['3',"54",
     "43"]# instead of using for loop we will use map function
a=list(map(int,lis))#map will convert all elements in int
print(a)


def sq(a):
    return a**2
l=[1,2,3,4,5,6,7,8,9]
b=list(map(sq,l))
print(b)


l=[1,2,3,4,5,6,7,8,9]
b=list(map(lambda x:x**2,l))# we can use lambda function direct instead of making function.
print(b)
def cube(a):
    return a**3
func=[sq,cube]
for i in range(5):
    val=list(map(lambda x:x(i),func))
    print(val)
print("Success in map")

#-----FILTER-------#
def  is_gr_5(num):
    return num>5
al=list(filter(is_gr_5,l))
print(al)

def  is_gr_6(num):
    return num>5# will return True or False
print(is_gr_6(65))


from functools import reduce
lsi=[1,2,34,54,5]
a=reduce(lambda x,y:x+y,lsi)
print(a)

