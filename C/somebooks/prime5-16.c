#include <stdio.h>
int main(void){

    int i,no;
    unsigned long counter=0;

    no = 2; /*new*/
    printf("%d\n", no++); /*new*/
    for ( ; no <= 1000; no += 2) { /*new*/
        for (i = 2; i < no; i++){
            counter++;
            if (no%i == 0){
                break;
            }
        }
        if (no == i){
            printf("%d, ", no);
        }
    }

    printf("\ncounter: %lu\n", counter);

    return(0);
}

