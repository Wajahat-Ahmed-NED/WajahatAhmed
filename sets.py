s=set()
s.add(1)
s.add(2)
print(s
      )
set1=s.union({3,5,8,4})
print(set1)
set2=s.intersection({2,4,62,2})
print(set2)
print(s.isdisjoint(set2))
s.remove(2)
print(s)