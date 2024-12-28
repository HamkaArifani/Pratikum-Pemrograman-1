baris=int(input(""))
kolom=baris
matriksA=[]
print("Matriks A")
for i in range (baris):
        h=list(map(int,input("").split()))
        matriksA.append(h)
matriksB=[]
print("Matriks B")
for i in range (baris):
        h=list(map(int,input("").split()))
        matriksB.append(h) 
matriksAXB=[[0 for _ in range (kolom)]for _ in range (baris)]
for i in range (baris):
        for j in range (kolom):
                matriksAXB[i][j]=0
                for k in range(baris):
                        matriksAXB[i][j]+=matriksA[i][k]*matriksB[k][j]
print("MatriksAXB") 
for i in range (baris):
        for j in range(kolom):
                print(matriksAXB[i][j] ,end=" ")
        print()

