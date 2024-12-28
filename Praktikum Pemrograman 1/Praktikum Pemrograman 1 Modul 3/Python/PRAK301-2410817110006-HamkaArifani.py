Bil1,Bil2,Bil3=map(int,input("Masukkan bilangan: ").split())
if Bil1>Bil2>Bil3:
    print("", Bil3, Bil2, Bil1)
elif Bil3<Bil1<Bil2 :
    print("",Bil3,Bil1,Bil2)
elif Bil1<Bil2<Bil3:
    print("",Bil1,Bil2,Bil3)
elif Bil1<Bil3<Bil2:
    print("", Bil1,Bil3,Bil2)
elif(Bil2<Bil1<Bil3):
    print("",Bil2,Bil1,Bil3)
elif(Bil2<Bil3<Bil1):
    print("",Bil2,Bil3,Bil1)