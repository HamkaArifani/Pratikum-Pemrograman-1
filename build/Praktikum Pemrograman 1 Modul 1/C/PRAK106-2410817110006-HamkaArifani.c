#include <stdio.h>
int main () {
    int a, b, c;
    printf("Variabel a bernilai ");
    scanf("%d", &a);
    printf("Variabel b bernilai ");
    scanf("%d", &b);
    printf("Variabel c bernilai ");
    scanf("%d", &c);
if(a!=b) {
    printf("Apakah a sama dengan b ? jawabannya adalah 0\n");
}
if(b>c) {
    printf("Apakah b lebih besar dari c ? jawabannya adalah 1\n");
}
if(a!=c){
    printf ("apakah a tidak sama dengan c ? jawabannya adalah 1");
} return 0;
}