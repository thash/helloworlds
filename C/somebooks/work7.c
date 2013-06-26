#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5;
    int max, min;
    double av;

printf("number 1: "); scanf("%d", &n1);
printf("number 2: "); scanf("%d", &n2);
printf("number 3: "); scanf("%d", &n3);
printf("number 4: "); scanf("%d", &n4);
printf("number 5: "); scanf("%d", &n5);



    max = n1;
    if (n2 > max){ max = n2; } 
    if (n3 > max){ max = n3; } 
    if (n4 > max){ max = n4; } 
    if (n5 > max){ max = n5; } 

    min = n1;
    if (n2 < min){ min = n2; } 
    if (n3 < min){ min = n3; } 
    if (n4 < min){ min = n4; } 
    if (n5 < min){ min = n5; } 

    av = (double)(n1+n2+n3+n4+n5)/5.0;

    printf("max: %d\n", max);
    printf("min: %d\n", min);
    printf("av: %f\n", av);

    return(0);
}

