def reverse(nilai:int):
    hasil=0
    while nilai>0:
        panjang=nilai % 10
        hasil=hasil * 10 + panjang
        nilai=nilai//10
    return hasil
A,B=map(int,input("").split())
A= reverse(A)
B= reverse (B)
C=A+B
print(reverse(C))