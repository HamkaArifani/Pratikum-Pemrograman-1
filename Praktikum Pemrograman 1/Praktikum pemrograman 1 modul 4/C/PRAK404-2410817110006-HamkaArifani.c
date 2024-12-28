#include <stdio.h>
int main(){
    int pilihan;
    float  A, B, At, Ak, Ap, Ab;
    printf("Pilih program\n 1. Penjumlahan\n 2. Pengurangan\n 3. Perkalian\n 4. Pembagian\n 5. Exit\n");
    printf("Masukkan pilihan: ");
    scanf("%d", &pilihan);
    while(1){
        if(pilihan==1){
            printf("Masukkan nilai pertama: ");
            scanf("%f", &A);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &B);
            At= A+B;
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f", A, B, At);
            break;
        }
        else if(pilihan==2){
            printf("Masukkan nilai pertama: ");
            scanf("%f", &A);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &B);
            Ak= A-B;
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f", A, B, Ak);
            break;
        }
        else if(pilihan==3){
            printf("Masukkan nilai pertama: ");
            scanf("%f", &A);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &B);
            Ap= A*B;
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f", A, B, Ap);
            break;
        }
        else if(pilihan==4){
            printf("Masukkan nilai pertama: ");
            scanf("%f", &A);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &B);
            Ab= A/B;
            printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f", A, B, Ab);
            break;
        }
        else if(pilihan==5){
            printf("Terimakasih, telah menggunakan kalkulator HAMKAARIFANI");
            break;
        }
        else{
            printf("Input anda salah, silahkan coba lagi");
            break;
        }
    }
}