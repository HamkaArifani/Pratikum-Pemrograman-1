#include <stdio.h>
int main (){
    double Bil1, Bil2, Hasil;
    printf("Masukkan nilai pertama : ");
    scanf("%lf", &Bil1);
    printf("Masukkan nilai Kedua : ");
    scanf("%lf", &Bil2);
    Hasil=Bil1+Bil2;
    printf("Hasil penjumlahan dari nilai pertama \"%.0f\" ", Bil1);
    printf("dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", Bil2, Hasil);
    return 0;
}