#include <stdio.h>
int main () {
    int Bilangan1, Bilangan2, Bilangan3, Bilangan4, AB, Hasil;
    printf("Variabel a bernilai ");
    scanf("%d", &Bilangan1);
    printf("Variabel b bernilai ");
    scanf("%d", &Bilangan2);
    printf("Variabel x bernilai ");
    scanf("%d", &Bilangan3);
    printf("Variabel y bernilai ");
    scanf("%d", &Bilangan4);
    AB= Bilangan1%Bilangan2;
    Hasil=AB+ Bilangan3%Bilangan4;
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah  %d", Hasil);
    return 0;
}