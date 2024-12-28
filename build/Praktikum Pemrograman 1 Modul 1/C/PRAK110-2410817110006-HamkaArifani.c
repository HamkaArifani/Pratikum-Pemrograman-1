#include <stdio.h>
#include <math.h>
int main() {
    int Alas, Tinggi, A, B, C, Keliling, Luas;
    Alas=C=5;
    Tinggi=A=12;
    B=sqrt(A*A+C*C);
    Keliling=A+B+C;
    Luas=Alas*Tinggi/2;
    printf("Diketahui :\nAlas = 5 cm\nTinggi = 12 cm\n");
    printf("\nJawab :\nSisi A = 12 cm\nSisi B = %d cm\nSisi C= 5 cm\n",B);
    printf ("Keliling = %d cm\nLuas = %d cm",Keliling,Luas);
    return 0;
}