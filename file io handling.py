#file io basics
# "r"for read
# "w "for write
# "a"for append
# "x" for creating new file
# "t" for text file
# "b"in binary mode
# "+"for read and write both
f=open("exercises","w")
f.write("pull ups")
f.close()


f=open("waji.txt")# f is file pointer or file handler
content=f.read()#will read the whole text
print(content)
content1=f.read(5)#will read only 5 characters
print("2",content1)
contents=f.read(5)#will read the next 5 characters 5 characters
print("3",contents)
f.close()

f=open("waji.txt","rb")#will read in binary form
content=f.read()#will read the whole text
print(content)
f.close()

f=open("waji.txt","rt")#by default it is in text form
content=f.read()#will read the whole text
print(content)
f.close()

f=open("waji.txt","rt")#by default it is in text form
for line in f:#will read line by line.And if we use f.read() then f will empty and whole text will go to content.
    print(line,end="")
f.close()

f=open("waji.txt","rt")#by default it is in text form
content=f.read()
for line in content:#will read character by character.
    print(line)
f.close()


f=open("waji.txt")
content=f.readline()# will read whole line
print(content)
f.close()

f=open("waji.txt")
content=f.readline()# will read whole line
contents=f.readline()
contentss=f.readline()
print(content)
print(contents)
print(contentss)
f.close()

f=open("waji.txt")# will convert whole text in list line by line into lists
content=f.readlines()
print(content)