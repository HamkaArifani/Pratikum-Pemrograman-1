Ap, Bp=map(int,input("Silahkan masukkan nilai A dan B: ").split())
A=Ap
B=Bp
a=True
while A != Bp or B!= Ap:
    if A<=Bp:
        A +=1
    else:
        A-=1
    if B<=Ap:
       B+=1
    else:
       B-=1
    if a:
        print(f"{Ap} {Bp} - {A} {B}", end=" ")
        a=False
    else:
        print(f"{A} {B}", end=' ')
    if B!=Ap:
       print("-",end=' ')
