#include <stdio.h>
int main(){
    int Ap, Bp, A, B;
    printf("Silahkan masukkan nilai A dan nilai B: ");
    scanf("%d %d", &Ap, &Bp);
    A=Ap;
    B=Bp;
    while(A != Bp){
        while (B != Ap){
        if(A<= Bp){
            A++;
        }
        else {
            A--;
        }
        if (B<= Ap){
            B++;
        }
        else {
            B--;
        }
        printf("%d %d - ", Ap, Bp);
        printf("%d %d ", A, B);
        if(B !=Ap){
            printf("- ");
        }
    }   
    }
}