class Employee:
    @staticmethod
    def isopen(day):
        if day.casefold()=="sunday":
            return False
        else:
            return True


print(Employee.isopen("monday"))