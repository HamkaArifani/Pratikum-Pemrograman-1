#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if (a!=b){
        printf("Jumlah tidak sama");
    }
    else{ 
      int kolom1[a],kolom2[b];
      for(int i=0;i<a;i++){
        scanf("%d ", &kolom1[i]);
         }
        for (int i=0;i<b;i++){
        scanf("%d", &kolom2[i]);
        }
        for (int i=0;i<a;i++){
            printf("%d ",kolom1[i]*kolom2[i]);
        }
      }
}