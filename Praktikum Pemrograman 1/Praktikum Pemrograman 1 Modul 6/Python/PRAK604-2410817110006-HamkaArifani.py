kode=input("")
pesan=input("")
panjangkode=len(kode)
panjangpesan=len(pesan)
panjangbintang=0
panjangpagar=0
if panjangkode != panjangpesan:
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for h in range (panjangkode):
        if pesan[h]==" " and kode[h]==" ":
            continue
        if kode[h]==pesan[h]:
            print("*", end="")
            panjangbintang+=1
        else:
            print("#",end="")
            panjangpagar+=1
    print(f"\n*= {panjangbintang:.0f}")
    print(f"*= {panjangpagar:.0f}")
    if panjangbintang>=panjangpagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")