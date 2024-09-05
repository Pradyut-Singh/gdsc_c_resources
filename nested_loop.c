
#include <stdio.h>

int main(){
    int i, j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("i=%d, j=%d\t", i, j);
        }
        printf("\n");
    }
    return 0;
}