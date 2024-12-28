def Biodata(Tahunlahir,Nama,Asal):
    TahunSekarang=2020
    umur=TahunSekarang-Tahunlahir
    angkatan=TahunSekarang
    print("Perkenalkan Nama Saya : ",Nama)
    print("Umur Saya : ",umur)
    print("Saya Adalah Angkatan : ", angkatan)
    print("Asal Saya Dari : ", Asal)
tahunLahir=int(input(""))
Namaku=input("")
Asal=input("")
Biodata(tahunLahir, Namaku, Asal)
