date={1:'banana',2:'apple',3:{'a':'mango','b':'apple'}}
date[3]['b']='grapes'
print(date)
date[3]['c']='water'
print(date)
del date[3]['b']
print(date)


dict2={}
dict2['programming']=['nesting','scope','looping']
dict2['fit']=['microprocessor','numbers','hexa decimal']
dict2['discrete structures']=['proposition','predicates','theorems']
dict2['calculus']=['gradient','curl','divergence']
dict2['pst']=['history of pakistan','constitution making','education']
print(dict2)
for i in dict2:
    print(i,dict2[i])

dict1={'empid':100,'empname':'zara','designation':'professor','salary':200000}
print(dict1)
dict1['emp address']=['composition address']
dict1['emp phone']=['0934823',23546543]
print(dict1)
dict1['emp hobby']=['cricket','football','tennis']
print(dict1)
for i in dict1:
    print(i,dict1[i])

family={'father name':'naeem ansari','mother name':'zara','siblings':['tanvir','naveed']}
for i,j in family.items():
    print(i,'\t',j)
grandfamily={
    'maternal':{'grandmother':'naseem',
              'grandfather':'ahmed',
              'aunty names':['anisa','amber','erum','sahar','urooj'],
              'uncle names':['arif','arshad','naveed']},
    'paternal':{'grandmother':'rehmat',
              'grandfather':'shafiq',
              'aunty names':['hoor bano','shagufta','nushaba','shaista'],
              'uncle names':['raees','zubair','ashfaq']}
}
for x,y in grandfamily.items():
    print(x,"\t",y)
family.update(grandfamily)
print(family)
del grandfamily['maternal']['aunty names'][0]
grandfamily['maternal']['aunty names'].append('meerab')
print(grandfamily)

d2={'blurringvision':'eyes',
    'flu':'nose',
    'deafness':'ear',
    'stomach ache and fever with cold':'typhoid'}
d3={'blurringvision':'stay away from using smart phones,laptop and do not burden on eyes',
    'flu':'avoid taking cold water and rice',
     'deafness':'stay away from listening high sounds',
    'stomach ache and fever with cold':'prevent avoid eating heavy and junk food'}
d4={'blurringvision':'add few drops of ARQ-E-GULAB twice a day',
    'flu':'take steam twice a day',
    'deafness':'Add drops of  ENOLUTE in ears',
    'stomach ache and fever with cold':'take drips regularly for 7 days after consulting with doctor'}
x=input("give your symptoms")
if x in d2:
    print("you have disease",d2[x])
    print('your precautions are',d3[x])
    print('your cure is',d4[x])
    print('in case of emergency please consult with doctor')
else:
    print("you have no disease in ENT")








d1={"student ID":"SE-01",
    "student name":"wajahat",
    "student address":"karachi"}
print(d1)
for  x in d1.keys():
    print(x)
for y in d1.values():
    print(y)
for x in d1:
    print(x)
for y in d1:
    print(d1[y])
for z in d1:
    print(z,d1[z])
for x,y in d1.items():
    print(x,y)
d1.clear()
print(d1)
d1['studentage']=18
print(d1)
data={1:'banana',2:'apple',3:{'a':'mango','b':'apple'}}
data[3]['a']='grapes'
data[3]['c']='cats'
print(data)
del data[3]['a']
print(data)

