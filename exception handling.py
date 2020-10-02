c=45
if c>5:
    raise Exception('c must be less than 5')
print('finished')
c=45
if c>5:
    raise ValueError('c must be less than 5')
print('finished')
# '2'+2 ye typeerror de ga because cant convert str to int
try:

    b=int(input('enter value for integer'))+4
    c = b + 4
except ValueError:
    print("error! you cannot enter string")
except NameError:
    print("error! variable is not defined")
except Exception:
    print('oops! something went wrong')
finally:
    print('this finally will always run although there is an exception occured or not')
print('good bye')



try:
    with open("C:\\Users\\DELL\\Downloads\\muzammil.txt") as f:
        print(f.read())

except FileNotFoundError:
    print('sorry file is not found')





try:
    print(5/0)
except ZeroDivisionError:
    print('you cant do division by zero')

print("give two numbers and i will divide them")
while True:
    f1=input('enter the first number \n or if you want to exit enter quit')
    if f1=='quit':
        print('thanks for using our calculator')
        break

    f2=input('enter the second number')
    if f2=='quit':
        break
    try:
        ans=int(f1)/int(f2)
    except ZeroDivisionError:
        print("can't divide by zero")
    else:
        print(ans)
