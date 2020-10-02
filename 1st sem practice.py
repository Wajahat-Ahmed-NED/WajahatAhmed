from math import *
import datetime
import random
y=[]
for i in range(1,10):
    if i==1:
        x=str(random.randint(0,4))
        y.append(x)
    else:
        x = str(random.randint(0,9))
        y.append(x)
country=input("Kindly tell us your country name").casefold()
if country=="pakistan":
    a = "+92" + "3" + "".join(y)
    print(a)
    if a[4] == "0" or a[4]=="2":
        print("Jazz")
    elif a[4] == "1":
        print("Zong")
    elif a[4] == "3":
        print("Ufone")
    else:
        print("Telenor")
elif country=="india":
    a = "+91" + "3" + "".join(y)
    print(a)
else:
    print("Sorry this countries doesn't belongs to indo-pak countries")
# def table(tno,rang):
#     for i in range(1,rang+1):
#         print(tno,"*",i,"=",tno*i)
# a=int(input("Enter table number"))
# b=int(input("Enter table range"))
# table(a,b)
# def calcarea(radius):
#     area=pi*radius**2
#     return area
# r=float(input("Enter Radius"))
# print(round(calcarea(r),2))
# print(435%43)
# print(2**10)
# print(min(23,45,34,13))
# print(abs(23-98))
# a=10
# print(++a)
# fno=int(input("Enter the number to calculate"))
# if fno<0 :
#     print("Invalid input")
# elif fno==0 or fno==1:
#     print("The factorial of given number is 1")
# else:
#     a=1
#     for i in range(1,fno+1):
#         a*=i
#     print("The factorial of given number is ",a)
# for i in range(5):
#     print(" "*(4-i),"*"*(i+1))
# for i in range(5):
#     for j in range(5-i):
#         print("*",end=" ")
#     print("")
# for i in range(1,6):
#     for j in range(i):
#         print("*",end=" ")
#     print()
# print("     Let's make a table    ")
# tno=int(input("Enter the table number"))
# rang=int(input("Enter the range of the table"))
# for i in range(1,rang+1):
#     print(tno," *" ,i,"=",tno*i)
# # sum=0
# avg=0
# for i in range(1,6):
#     no=int(input("enter any number"))
#     sum=sum+no
# avg=sum/5
# print("Your total sum is",sum)
# print("Your average is found to be",avg)
# grade=int(input("enter your grade "))
# salary=int(input("Enter your current salary"))
# if grade>1 and grade<17:
#     new_salary=salary+(salary*0.2)
#     print("Your new salary is ",new_salary)
# elif grade>16 and grade<20:
#     new_salary = salary + (salary * 0.1)
#     print("Your new salary is ", new_salary)
# elif grade>19 and grade<23:
#     new_salary = salary + (salary * 0.05)
#     print("Your new salary is ", new_salary)
# else:
#     print("Invalid Grade")
# alp=input("Enter any word")
# v=0
# for i in alp:
#     if i in 'aeiou':
#         print(i,"is a vowel in this word")
#         v+=1
#     else:
#         pass
# print("There are",v,"vowels in this word")
# if alp in 'aeiou':
#     print("Given alphabet is a vowel")
# else:
#     print("Given alphabet is  a consonant")
# for i in range(1,10):
#     print(i,end=" ")
# no=int(input("enter the no.to check"))
# if no%2==0:
#     print("The given number is even")
# else:
#     print("The given number is odd")
# r=float(input("Enter the radius of the circle"))
# area=pi*r**2
# circum=2*pi*r
# print("The area of circle with radius ",r,"is",area)
# print("The circumference is found to be ",circum)
# marks=float(input("enter your marks"))
# if marks>=80 and marks<100:
#     print("Your Grade is A-one")
# elif marks>=70 and marks<80:
#     print("Your Grade is A")
# elif marks>=60 and marks<70:
#     print("Your Grade is B")
# elif marks>=50 and marks<60:
#     print("Your Grade is C")
# elif 40<=marks<50:
#     print("Your Grade is D")
# elif marks==100 or marks<0 or marks>100:
#     print("Please enter valid marks")
# elif 33<=marks<40:
#     print("Your Grade is E")
# else:
#     print("Your Grade is too low to mention")
# s="Good Morning"
# print(s.__len__())
# print(len(s))
# print("   "+"RETIREMENT CALCULATING MACHINE","   ")
# age=int(input("enter your age"))
# if age>0 and age<=65:
#     ryears=65-age
#     print("You have left ",ryears,"years in your retirement")
# else:
#     print("Invalid Input")
# now=datetime.datetime.now()
# year=now.strftime("%y")
# print(year)
# month=now.strftime("%m")
# print(month)
# date=now.strftime("%d")
# print(date)
# mytime=now.strftime("%H:%M:%S")
# print(mytime)

# x=120
# y="Ned"
# print(x,"Data Type is ",type(x))
# print(x,'sin of x is ',sin(x))
# print(x,"square root of x is ",sqrt(x))
# print(min(2,54,5))
# print(max(23,4,3,33))

# marks=float(input("Enter you Aptitiude Test Marks"))
# if marks>=50:
#     print("You Have Passed The Entry Test")
# else:
#     print("Sorry You Don't Qualify The Entry Test")
# age=int(input("Enter your age in integer"))
# print("My name is Wajahat and my age is ",age)
# a=int(input("Enter your age"))
# b=input("Enter Your Name")
# print("Your Name is "+b+"and your age is ",a)
#
# str1="Ned University"
# print(str1)
# print(str1[5:9])
# print(str1.upper())
# print(str1.lower())
# print(str1.title())
# print(str1.replace("N","S"))
# x="wajahat"
# print(str1+" " +x)
# print(x)
# print(type(x))
# a=3
# b=4.6
# c=34j
# print(a,b,c)
# print(type(a),type(b),type(c))
# print(int(b))
# print(complex(a))