f=open("waji.txt","a")
f.write("wajahat bhai boht ache han ")
f.close()

f=open("waji.txt","r")
print(f.read())
f.close()

f=open("waji.txt","w")
f.write("wajahat bhai boht ache han ")
f.close()

f=open("waji.txt","r")
print(f.read())
f.close()

f=open("waji.txt","w")
a=f.write("wajahat bhai boht ache han ")
print(a)#will return how many characters he is writing
f.close()

f=open("waji.txt","r+")
print(f.read())
f.write("thank you")
f.close()