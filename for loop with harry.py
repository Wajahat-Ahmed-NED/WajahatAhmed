list1=["harry","marry","narry","cherry"]
for items in list1:
    print(items)

list1=[["harry",1],["marry",2],["narry",4],["cherry",656]]
for items in list1:
    print(items)

list1=[["harry",1],["marry",2],["narry",4],["cherry",656]]
for items,lollypop in list1:
    print(items,lollypop)

dict1=dict(list1)
print(dict1)

for items,lollypop in dict1.items():
    print(items," and lollypop is",lollypop)


list2=[1,2,3,"harry","ali",6,8,79,0,7]
for items in list2:
    if type(items)==int and items>6:
        print(items)
for items in list2:
    if str(items).isnumeric() and items>6:
        print(items)


