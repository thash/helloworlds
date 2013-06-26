#include <stdio.h>

int main(void)
{
   int n1, n2; 
    printf("enter 2 integers\n");
    printf("integer 1: "); scanf("%d", &n1);
    printf("integer 2: "); scanf("%d", &n2);


    if ((n1 - n2) > 10 || (n2 - n1) > 10) {
        printf("the difference between int1 and int2 is 11 and more\n");
    } else {
        printf("the difference between int1 and int2 is 10 and fewer\n");
    }

    return(0);
}

