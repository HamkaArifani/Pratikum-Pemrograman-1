#include <stdio.h>
#include <math.h>
int hitung(int nilai1, int nilai2){
    int Hasil=nilai1-nilai2;
    return (int)fabs((double)Hasil);
}
int mutlak(int angka){
    return (int)fabs((double)angka);
}
int main(){
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&c);
    scanf("%d",&b);
    scanf("%d",&d);
    int Hasil = hitung(a,b) + hitung(c,d);
    printf("%d",mutlak(Hasil));
    return 0;
}
