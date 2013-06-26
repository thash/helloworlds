#include <stdio.h>

int main(void)
{
    int sec, sec2, sec3;
    int hour, min;
    printf("enter seconds: "); scanf("%d", &sec);

    hour = sec / 3600;
    sec2 = sec % 3600;
    min = sec2 / 60;
    sec3 = sec2 % 60;

    printf("%dH: %dM: %dS \n", hour, min, sec3);

    return(0);
}

