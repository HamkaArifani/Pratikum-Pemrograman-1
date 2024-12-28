kolom=int(input(""))
matriks=list(map(int,input("").split()))
for i in range (kolom):
   kolom_i=matriks[i]*(i+1)
   print(kolom_i, end=" ")