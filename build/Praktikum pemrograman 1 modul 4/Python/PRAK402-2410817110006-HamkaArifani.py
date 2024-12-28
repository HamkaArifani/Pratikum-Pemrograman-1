pembatas=int(input("Silahkan masukkan pembatas: "))
for H in range(1, pembatas+1):
    if H % 2 == 1:
        print(H,end=' ')
print("")
for H in range(2,pembatas+1):
    if H % 2 == 0:
        print(H, end=' ')
