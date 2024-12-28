def hitung(angka1,angka2):
    return abs(angka1-angka2)
def mutlak(angka):
    return abs(angka)
a,c,b,d=map(int, input("").split())
hasil=hitung(a,b)+hitung(c,d)
print(mutlak(hasil))