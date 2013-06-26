#include <stdio.h>
int main(void){

    int i,no;
    int prime[500];
    int ptr = 0;
    unsigned long counter=0;

    prime[ptr++] = 2;
    prime[ptr++] = 3;

    for (no = 5; no <= 1000; no += 2) {
        int flag = 0;
        for (i = 1; counter++, prime[i] * prime[i] <= no; i++){ /*new - root*/
            counter++;
            if (no%prime[i] == 0){
                flag = 1;
                break;
            }
        }
        if (!flag){ /* flag */
            prime[ptr++] = no;
        }
    }

    for (i = 0; i < ptr; i++){
        printf("%d, ", prime[i]);
    }
    printf("\ncounter: %lu\n", counter);

    return(0);
}
