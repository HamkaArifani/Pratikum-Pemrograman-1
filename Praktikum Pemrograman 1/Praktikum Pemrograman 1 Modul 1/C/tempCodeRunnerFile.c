#include <stdio.h>
int main () {
    int SepatuA, SepatuB, DiskonA, DiskonB;
    printf("Harga sepatu A adalah ");
    scanf("%d", &SepatuA);
    printf("Harga sepatu B adalah ");
    scanf("%d", &SepatuB);
    DiskonA=SepatuA-SepatuA*0.13;
    DiskonB=SepatuB-SepatuB*0.21;
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi  %d\n", DiskonA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi  %d\n", DiskonB);
}