#include <stdio.h>
int main(){
    int Nilai;
    printf("Masukkan nilai: ");
    scanf("%d", &Nilai);
    switch(Nilai) {
        case 50 ... 59:
        printf("Nilai akhir Anda adalah D");
        break;
        case 60 ... 69:
        printf("Nilai akhir Anda adalah C");
        break;
        case 70 ... 79:
        printf("Nilai akhir Anda adalah B");
        break;
        case 80 ... 100:
        printf("Nilai akhir Anda adalah A");
        break;
        default:
        printf("Nilai akhir Anda adalah E");
    }
}