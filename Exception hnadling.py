a=input("Enter any number")
b=input("Enter another number")
try:

    print("The sum of these two numbers is",
          int(a)+int(b))
except Exception as e:
    print(e)

print("Thank you for using our program")
