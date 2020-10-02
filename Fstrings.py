me="wajahat"
a="this is %s" %me
print(a)


me="wajahat"
aq=1
a="this is %s %s" %(me,aq)
print(a)

me="wajahat"
aq=1
a="this is {} {} "
b=a.format(me,aq)
print(b)

me="wajahat"
aq=1
a="this is {1} {0} "
b=a.format(me,aq)
print(b)
import math
a=f"this is {me}{aq}{math.cos(20)}"# known as fstring for readable code
print(a)