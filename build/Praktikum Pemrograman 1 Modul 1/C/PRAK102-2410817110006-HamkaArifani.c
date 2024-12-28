#include <stdio.h>
int main () {
    double Bilangan1, Bilangan2, Bilangan3, Hasil;
    printf("Variabel a bernilai ");
    scanf("%lf", &Bilangan1);
    printf("Variabel b bernilai ");
    scanf("%lf", &Bilangan2);
    printf("Variabel c bernilai ");
    scanf("%lf", &Bilangan3);
    Hasil=Bilangan1*Bilangan2/Bilangan3;
    printf("Hasil dari a dikali b dibagi c adalah  %lf", Hasil);
    return 0;
}