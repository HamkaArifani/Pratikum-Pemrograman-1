angka=int(input("Silahkan masukkan bilangan: "))
if angka==0:
    print("Nol")
elif 1<=angka<=9:
    print("satuan")
elif 11<=angka<=19:
    print("Belasan")
elif angka==10 or angka>=20 & angka<=99:
    print("Puluhan")
else:
    print("Anda menginput melewati batas bilangan")