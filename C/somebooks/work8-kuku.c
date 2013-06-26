#include <stdio.h>

void kuku(int n){
    int i;
    for (i = 1; i <= 9; i++){
        printf("%3d", i*n);
    }
}

int main(void){
    int k;
    for (k = 1; k <= 9; k++){
        kuku(k);
        putchar('\n');
    }

    return(0);
}
