print("Pilih program\n 1. Penjumlahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n 5. Exit\n")
pilihan=int(input("Masukkan pilihan: "))
while True:
    if pilihan==1:
        A=float(input("Masukkan nilai pertama: "))
        B=float(input("Masukkan nilai kedua: "))
        At=A+B
        print(f"Hasil penjumlahan antara {A:.2f} dengan {B:.2f} adalah {At:.2f}")
        break
    elif pilihan==2:
        A=float(input("Masukkan nilai pertama: "))
        B=float(input("Masukkan nilai kedua: "))
        Ak=A-B
        print(f"Hasil penjumlahan antara {A:.2f} dengan {B:.2f} adalah {Ak:.2f}")
        break
    elif pilihan==3:
        A=float(input("Masukkan nilai pertama: "))
        B=float(input("Masukkan nilai kedua: "))
        Ap=A*B
        print(f"Hasil penjumlahan antara {A:.2f} dengan {B:.2f} adalah {Ap:.2f}")
        break
    elif pilihan==4:
        A=float(input("Masukkan nilai pertama: "))
        B=float(input("Masukkan nilai kedua: "))
        Ab=A/B
        print(f"Hasil penjumlahan antara {A:.2f} dengan {B:.2f} adalah {Ab:.2f}")
        break
    elif pilihan==5:
        print("Terimakasih, telah menggunakan kalkulator HAMKAARIFANI")
        break
    else:
        print("Input anda salah, silahkan coba lagi")
        break

