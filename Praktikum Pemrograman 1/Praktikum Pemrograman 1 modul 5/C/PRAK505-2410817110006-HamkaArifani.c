#include <stdio.h>
void Biodata(int tahunlahir, char Nama[], char Asal[]){
int tahunsekarang = 2020;
int umur=tahunsekarang-tahunlahir;
int angkatan=tahunsekarang;
printf("Perkenalkan Nama Saya : %s\n",Nama);
printf("Umur Saya : %d\n",umur);
printf("Saya Adalah Angkatan : %d\n",tahunsekarang);
printf("Asal Saya Dari : %s\n",Asal);
}
int main() {
int tahunLahir;
char A[20], B[15];
scanf(" %d",&tahunLahir);
scanf(" %[^\n]%*c",&A);
scanf(" %[^\n]%*c",&B);
Biodata(tahunLahir, A, B);
return 0;
}