#include <stdio.h>
int main() {
     //Test Case 1
     double Jari2, Tinggi, Keliling, Volume, phi, Luas,  rt;
     phi=22.0/7.0;
     scanf("%lf",&Jari2);
     scanf("%lf",&Tinggi);
     Volume=phi*Jari2*Jari2*Tinggi;
     Keliling=2*phi*Jari2;
     rt=Jari2+Tinggi;
     Luas=2*phi*Jari2*rt;
     printf("\nVolume = %.2f\n", Volume);
     printf("Luas = %.2f\n", Luas);
     printf("Keliling = %.2f\n", Keliling);
     //Test Case 2
     printf("\n");
     double Jari22, Tinggi2, Keliling2, Volume2, Luas2,  rt2;
     scanf("%lf %lf",&Jari22, &Tinggi2);
     Volume2=phi*Jari22*Jari22*Tinggi2;
     Keliling2=2*phi*Jari22;
     rt2=Jari22+Tinggi2;
     Luas2=2*phi*Jari22*rt2;
     printf("\nVolume = %.2f\n", Volume2);
     printf("Luas = %.2f\n", Luas2);
     printf("Keliling = %.2f", Keliling2);
     return 0;
}
