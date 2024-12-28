#include <stdio.h>
int main(){
    int kolom;
    scanf("%d",&kolom);
    int matriks[kolom];
    for(int i=0;i<kolom;i++){
        scanf("%d", &matriks[i]);
        int kolom_i=matriks[i] * (i+1);
        printf("%d ",kolom_i);
    }
}