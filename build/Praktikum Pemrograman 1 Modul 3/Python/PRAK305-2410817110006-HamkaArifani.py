input=int(input("Silahkan masukkan bilangan: "))
if input>=86400:
    hari= input//86400
    input= input%86400
else:
    hari=0
if input>=3600:
    jam=input//3600
    input=input%3600
else:
    jam=0
if input>=60:
    menit=input//60
    input=input%60
else:
    menit=0
detik=input
if hari>=1:
    print(f"{hari:} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")