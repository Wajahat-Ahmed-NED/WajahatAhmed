import time
import datetime
x=datetime.datetime.now()
y=x.strftime("%H : %M : %S")
print(y,"seconds")
i=0
while i<=8:
    if i==0:
        print("Start your work")
    else:
        print("Hopefully that you have done physical exercies \n Start your work")
    time.sleep(30)
    print(x)
    print("Stop the work and do eyes exercise")
    time.sleep(5)
    print("Hopefully that you have done eyes exercies \n Start your work")
    time.sleep(15)
    print(x)
    print("Stop the work and do physical exercise and drink some water")
    time.sleep(5)
    i+=1