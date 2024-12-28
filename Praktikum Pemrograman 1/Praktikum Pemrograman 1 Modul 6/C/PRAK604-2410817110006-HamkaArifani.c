#include <stdio.h>
#include <string.h>
int main(){
    char kode[999], pesan[999];
    int panjangkode,panjangpesan, panjangbintang, panjangpagar;
    panjangbintang=0;
    panjangpagar=0;
    scanf(" %[^\n]",&kode);
    scanf(" %[^\n]",&pesan);
    panjangkode=strlen(kode);
    panjangpesan=strlen(pesan);
    if(panjangkode!=panjangpesan){
        printf("Panjang kalimat berbeda, pesan palsu");
    } else{
        for(int h=0;h<panjangpesan;h++){
            if(kode[h]==' ' && pesan[h]==' '){
                continue;
            }
            if(kode[h]==pesan[h]){
                printf("*");
                panjangbintang++;
            }
            else {
                printf("#");
                panjangpagar++;
            }
        }
        printf("\n");
        printf("*= %d\n",panjangbintang);
        printf("#= %d\n",panjangpagar);
        if(panjangbintang>=panjangpagar){
            printf("Pesan asli");
        }
        else{
            printf("Pesan palsu");
        }
    }
}