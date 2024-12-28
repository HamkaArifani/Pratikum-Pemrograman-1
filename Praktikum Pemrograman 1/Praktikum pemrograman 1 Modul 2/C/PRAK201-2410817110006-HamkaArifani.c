#include <stdio.h>
int main() {
    char Nama[50], NIM[50], TTL[50], Hobby [50], Bobby[50], Alamat[50];
    int Nomor, Kelas;
    printf("Nama                : ");
    scanf(" %[^\n]", & Nama);
    printf("NIM                 : ");
    scanf(" %[^\n]", &NIM);
    printf("Kelas Paralel       : ");
    scanf( "%d", &Kelas);
    printf("Tempat/Tanggal Lahir: ");
    scanf( " %[^\n]", &TTL);
    printf("Alamat              : ");
    scanf(" %[^\n]", &Alamat);
    printf("Hobby               : ");
    scanf(" %[^\n]", &Hobby);
    printf("No.HP               : ");
    scanf(" %d", &Nomor);
    return 0;
}