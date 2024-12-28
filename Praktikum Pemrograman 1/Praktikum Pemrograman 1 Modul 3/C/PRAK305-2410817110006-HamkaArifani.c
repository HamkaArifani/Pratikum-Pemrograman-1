#include <stdio.h>
int main(){
    int Input, hari, jam, menit, detik;
    printf("Masukkan detik: ");
    scanf("%d", &Input);
    if(Input>=86400){
        hari=Input/86400;
        Input=Input % 86400;
    }
    else{
        hari=0;
    }
     if (Input>=3600){
        jam=Input/3600;
        Input=Input % 3600;
     }
     else {
        jam=0;
     }
     if (Input>=60){
        menit=Input/60;
        Input=Input % 60;
     }
     else{
        menit=0;
     }
     detik=Input;
     if(hari>=1){
        printf("%d Hari %02d:%02d:%02d",hari, jam, menit, detik);
     }
     else{
        printf("%02d:%02d:%02d", jam, menit, detik);
     }
}