# class-- template
# object-- instance of the class

# DRY-- Donot repeat yourself
#def get_info (): aesa function ha jo sirf filmstars ke naam dega or bataega
# ke unhone kitne film banae kisi or ke liye error dega to check krne k liye hme
# bar bar type krna parega asan hal ye ha ke pehle ek dami banado phir bar bar film
# star ke name daal kr check krlo  "REPETITION NAI HOGI"
class student:
    pass
waji=student()
kaji=student()
print(waji,kaji)# will give only memory location

class student1:
    pass
waji=student1()# reference variable
kaji=student1()
waji.name="wajahat"#instance variable ha ye(object ki apni property ha)
waji.std=12
waji.section="A"
kaji.std=9
print(waji.name,kaji.std)