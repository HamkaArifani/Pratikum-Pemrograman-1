#include <stdio.h>
int main(){
    int angka;
    printf("Silahkan masukkan bilangan: ");
    scanf("%d", &angka);
    if (angka==0){
        printf("Nol");
    }
    else if (angka>=1 && angka<=9){
        printf("Satuan");
    }
    else if (angka>=11 && angka<=19){
        printf("Belasan");
    }
    else if (angka==10 || angka>=20 && angka<=99) {
        printf("Puluhan");
    }
    else{
        printf("Anda menginput melewati batas bilangan");
    }
}