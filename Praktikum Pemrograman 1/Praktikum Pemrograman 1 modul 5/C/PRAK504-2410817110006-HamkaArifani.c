#include <stdio.h>
int reverse(int nilai){
    int hasil=0;
    while(nilai>0){
        int panjang=nilai % 10;
        hasil=hasil * 10 + panjang;
        nilai=nilai/10;
        } 
        return hasil;
}
int main() {
int A, B;
scanf("%d %d",&A,&B);
A=reverse(A);
B=reverse(B);
int C = A+B;
printf("%d",reverse(C));
}