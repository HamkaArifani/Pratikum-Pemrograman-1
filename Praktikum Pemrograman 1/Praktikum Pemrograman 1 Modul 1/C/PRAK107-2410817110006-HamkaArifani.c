#include <stdio.h>
int main() {
    int sisi1, sisi2, sisi3, keliling, Harga, Total;
    sisi1=4;
    sisi2=5;
    sisi3=7;
    Harga=85000;
    keliling=sisi1+sisi2+sisi3;
    Total=Harga*keliling;   
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah 4, 5, dan 7\n");
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("tanah Per Meter adalah 85000\n");
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah Rp : %d", Total);
    return 0;
}