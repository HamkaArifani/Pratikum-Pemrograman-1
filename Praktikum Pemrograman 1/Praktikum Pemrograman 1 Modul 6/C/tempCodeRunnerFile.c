#include <stdio.h>
int main (){
    int baris, kolom;
    scanf("%d",&baris);
    kolom=baris;
    int matriksA[baris][kolom], matriksB[baris][kolom],matriksAXB[baris][kolom];
    printf("Matriks A\n");
    for (int i=0;i<baris;i++){
        for(int j=0; j<kolom;j++){
            scanf("%d", &matriksA[i][j]);
        }
    }
    printf("Matriks B\n");
    for (int i=0;i<baris;i++){
        for(int j=0; j<kolom;j++){
            scanf("%d", &matriksB[i][j]);
        }
    }
    
    for (int i=0;i<baris;i++){
        for(int j=0; j<kolom;j++){
            matriksAXB[i][j]=0; 
            for(int h=0;h<baris;h++){
                matriksAXB[i][j]+=matriksA[i][h]*matriksB[h][j];
             }  
        }
    }
    printf("Matriks AXB\n");
    for (int i=0;i<baris;i++){
        for(int j=0; j<kolom;j++){
            printf("%d ",matriksAXB[i][j]);
        }
        printf("\n"); 
    }
}
