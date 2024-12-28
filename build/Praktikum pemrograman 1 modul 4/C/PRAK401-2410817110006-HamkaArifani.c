#include <stdio.h>
int main() {
    int sekawan;
    char simbolsekawan;
    scanf("%d %c", &sekawan, &simbolsekawan);
    for(int H=1; H<=50;H++){
        if(H % sekawan ==0){
            printf("%c", simbolsekawan);
        }
        else {
            printf("%d", H);
        }
    }
}