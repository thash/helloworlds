#include <stdio.h>

#define NUMBER 5

int main(void) {
    int i;
    int tensu[NUMBER];
    int sum;

    puts("tennsu wo nguuryokusitekudasai");

    for (i = 0; i< NUMBER; i++) {
        printf("No.%2d: ", i+1);
        scanf("%d", &tensu[i]);
        sum += tensu[i];
    }

    printf("sum: %5d\n", sum);
    printf(" av: %5.1f\n", (double)sum/NUMBER );

    return(0);
}
