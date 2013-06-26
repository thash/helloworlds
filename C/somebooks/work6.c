#include <stdio.h>

int main(void)
{
    int n, lim, sum;

printf("1 to ?: "); scanf("%d", &lim);

    sum = 0; n = 1;
    do {
        sum = sum + n;
        n = n + 1;
    } while (n <= lim);


    printf("sum of 1 to %d is: %d\n", lim, sum);

    return(0);
}

