#include <stdio.h>
int main(){
    int a, b, hasil, total, totalakhir;
    printf("Masukkan jumlah baris dan nilai: ");
    scanf("%d %d", &a, &b);
    for(int i=1; i<=a; i++){
        total=0;
        for(int h=i;h>=1;h--){
            hasil=h*b;
            total+=hasil;
            printf("(%d * %d)",h, b);
            if(h>1){
                printf("+");
            }
        }
        printf(" = %d\n", total);
         totalakhir+=total;
    }
            printf("\n%d", totalakhir);
}