import time
initial = time.time()
i=0
while i<45:
    print("Wajahat is the best programmer")
    i+=1
print("While loop ran for ",time.time()-initial," secs")

initial2=time.time()
print(initial2)
for i in range(45):
    print("Wajahat is the best programmer")
print("For loop ran for ",time.time()-initial2," secs")

time1=time.asctime(time.localtime(time.time()))
print(time1)
#time.time() ticks ko ginta ha
#time.local time() time ko tuple ma convert krdeta ha
# time.asctime().

i=0
while i<=10:
    print("This is wajahat Bhai")
    time.sleep(2)# will stop the execution for two seconds
    i+=1