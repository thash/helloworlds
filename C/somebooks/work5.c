#include <stdio.h>

int main(void)
{
    int n, sum;
    n = 1; sum = 0;
    do {
        sum = sum + n;
        n = n + 1;
    } while (n < 11);

    printf("sum of 1 to 10 is: %d\n", sum);

    return(0);
}

