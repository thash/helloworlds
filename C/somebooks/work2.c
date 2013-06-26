#include <stdio.h>

/*home work for Programmin#3*/

int main(void)
{
    double n;
    int ni;
    double nd;

    puts("enter num(float) n");
    scanf("%lf", &n);

    ni = (int)n;
    nd = n - ni;

    puts("int part is");
    printf("%d\n", ni);
    puts("float part is");
    printf("%f\n", nd);

    puts("and n is round off to...");

    if ((int)(nd*2)){ ni = ni+1; };
    printf("%d\n", ni);

    return(0);
}

