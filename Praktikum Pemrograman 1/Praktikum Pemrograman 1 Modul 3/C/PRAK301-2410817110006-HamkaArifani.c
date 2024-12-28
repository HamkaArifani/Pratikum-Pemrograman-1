#include <stdio.h>
int main(){
    int Bilangan1, Bilangan2, Bilangan3;
    printf("Masukkan bilangan: ");
    scanf("%d %d %d", &Bilangan1, &Bilangan2, &Bilangan3);
    if(Bilangan1>Bilangan2 && Bilangan2>Bilangan3){
        printf("%d %d %d",Bilangan3, Bilangan2,Bilangan1);
    }
    else if(Bilangan1<Bilangan2&&Bilangan2<Bilangan3){
        printf("%d %d %d",Bilangan1, Bilangan2, Bilangan3);
    }
    else if(Bilangan1<Bilangan2&&Bilangan2>Bilangan3&&Bilangan1<Bilangan3){
        printf("%d %d %d",Bilangan1,Bilangan3,Bilangan2);
    }
    else if(Bilangan1>Bilangan2&&Bilangan2<Bilangan3&&Bilangan1>Bilangan3){
        printf("%d %d %d",Bilangan2, Bilangan3, Bilangan1);
    }
    else if(Bilangan1>Bilangan2&&Bilangan2<Bilangan3&&Bilangan1<Bilangan3){
        printf("%d %d %d",Bilangan2, Bilangan1, Bilangan3);
    }
    else if(Bilangan1<Bilangan2&&Bilangan2>Bilangan3&&Bilangan1>Bilangan3){
        printf("%d %d %d",Bilangan3, Bilangan1, Bilangan2);
    }
}
    
