#include <stdio.h>
int main(){
    int Bilangan;
    printf("Masukkan bilangan = ");
    scanf("%d", &Bilangan);
    if(Bilangan==0){
        printf("nol");
    }
    else if(Bilangan<0){
        printf("negatif");
    }
    else{
        printf("positif");
    }
}