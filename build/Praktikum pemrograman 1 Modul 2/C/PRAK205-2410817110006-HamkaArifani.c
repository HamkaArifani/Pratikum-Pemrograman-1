#include <stdio.h>
#include <math.h>
int main() {
    //test case 1
    int A, B, C, Tinggi, Alas, Luas, Keliling;
    scanf("%d %d", &A, &B);
    C=sqrt(B*B-A*A);
    Tinggi=A;
    Alas=C;
    Keliling=A+B+C;
    Luas=Alas*Tinggi/2;
    printf("Alas = %d cm\n", Alas);
    printf("Tinggi = %d cm\n", Tinggi);
    printf("Keliling = %d cm\n", Keliling);
    printf("Luas = %d cm^2\n", Luas);
    //test case 2
    int A2, B2, C2, Tinggi2, Alas2, Luas2, Keliling2;
    scanf("%d", &A2);
    scanf("%d", &B2);
    C2=sqrt(B2*B2-A2*A2);
    Tinggi2=A2;
    Alas2=C2;
    Keliling2=A2+B2+C2;
    Luas2=Alas2*Tinggi2/2;
    printf("Alas = %d cm\n", Alas2);
    printf("Tinggi = %d cm\n", Tinggi2);
    printf("Keliling = %d cm\n", Keliling2);
    printf("Luas = %d cm^2\n", Luas2);
    return 0;
}