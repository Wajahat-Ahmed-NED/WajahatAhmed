dict={"hamza":"burger",
      "muneeb":"tikka","ali":"fish"}
print(dict)
print(dict["hamza"])#will give value of hamza

dict1={"hamza":"burger",
      "muneeb":"tikka","ali":"fish",
       "anni":{"b":"paratha","l":"rice","d":"meat"}}
print(dict1["anni"])#will print value of anni
print(dict1["anni"]["b"])#will print dict of anni and then value of b in that dictionry
dict1["asif"]="fast food"
del dict1["hamza"]
print(dict1)

d2=dict1.copy()# will store copy of dict1 in d2
# if we do d2=dict1 then if we make changes in d2 then changes will done automatically in dict1
print(d2.get("muneeb"))# works same as print(d2["muneeb"])
dict1.update({"urooj":"toffee"})#same as dict1["urooj"]="toffee"
print(dict1)
print(dict1.keys())
print(dict1.items())

