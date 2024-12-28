#include <stdio.h>
int main(){
     float jari2, phi, Jaraktempuh, Sebanyak, keliling;
    Jaraktempuh=14;
    Sebanyak=5;
    keliling=Jaraktempuh/Sebanyak;
    phi=3.14;
    jari2=keliling/(2*phi);
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = 5 putaran\n");
    printf("Jarak tempuh Pak Dengklek adalah 14 Kilometer\n");
    printf("\nJawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jari2);
    return 0;
}