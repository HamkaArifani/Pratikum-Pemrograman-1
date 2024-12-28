baris,kolom=map(int,input("").split())
matriks=[[0 for _ in range(kolom)]for _ in range(baris)]
ij=list(map(int,input("").split()))
Pmatriks=0
for i in range(baris):
    for j in range(kolom):
        matriks[i][j]=ij[Pmatriks]
        print(matriks[i][j],end=' ')
        Pmatriks+=1
    print( )
