def maksimal(a:int,b:int):
    if a>b:
        return a
    else:
        return b
def minimal(a:int,b:int):
    if a<b:
        return a
    else:
        return b
batas=0
maks= -100000
min= 100000
bilangan=int(input(""))
while batas<bilangan:
    nilai=input("")
    nilai_list=list(map(int,nilai.split()))
    for nilai in nilai_list:
        maks=maksimal(maks,nilai)
        min=minimal(min,nilai)
        batas+=1
print(maks,min)