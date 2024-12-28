a, b=map(int,input("Masukkan jumlah baris dan nilai: ").split())
totalakhir=0
for i in range(1,a+1):
    total=0
    for h in range(i,0,-1):
            hasil=h*b
            total+=hasil; 
            print(f"({h}*{b})", end=' ')
            if h>1:
                  print("+",end=' ')
    print(f"= {total}")  
    totalakhir+=total  
print(f"{totalakhir}")         
