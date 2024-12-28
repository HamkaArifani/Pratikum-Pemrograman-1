#include <stdio.h>
int main(){
    int Pembatas, H;
    printf("Silahkan masukkan pembatas: ");
    scanf("%d",&Pembatas);
    for(H=1; H<=Pembatas; H++){
       if(H % 2 == 1) printf("%d ", H);
    }
    printf("\n");
    for(H=Pembatas;H>=2;H--){
        if(H % 2 == 0){
            printf("%d ", H);   
    }
}
}