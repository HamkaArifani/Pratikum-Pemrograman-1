a,b=map(int,input("").split())
if a != b:
    print("Jumlah tidak sama")
else:
    kolom1=list(map(int,input("").split()))
    kolom2=list(map(int,input("").split()))
    for i in range (a):
        print(kolom1[i]*kolom2[i],end=' ')