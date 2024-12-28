#include <stdio.h>
int main () {
    double Bilangan1, Bilangan2, Bilangan3, Bilangan4, AB, Hasil;
    printf("Variabel a bernilai ");
    scanf("%lf", &Bilangan1);
    printf("Variabel b bernilai ");
    scanf("%lf", &Bilangan2);
    printf("Variabel x bernilai ");
    scanf("%lf", &Bilangan3);
    printf("Variabel y bernilai ");
    scanf("%lf", &Bilangan4);
    AB= Bilangan1+Bilangan2;
    Hasil=AB *Bilangan3 /Bilangan4;
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah  %.2f", Hasil);
    return 0;
}