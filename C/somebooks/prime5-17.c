#include <stdio.h>
int main(void){

    int i,no;
    unsigned long counter=0;

    no = 2;
    printf("%d\n", no++);
    for ( ; no <= 1000; no += 2) {
        for (i = 3; i < no; i += 2){ /*new*/
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


