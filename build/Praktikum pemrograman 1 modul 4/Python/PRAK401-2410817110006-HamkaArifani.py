nilai=input("").split()
sekawan=int(nilai[0])
simbolsekawan=nilai[1]
for H in range(1,51):
    if H % sekawan== 0:
        print(simbolsekawan, end=' ')
    else :
        print(H, end=' ')