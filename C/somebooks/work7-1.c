#include <stdio.h>

int main(void)
{
int i, j, ln, ln2;
printf("steps?"); scanf("%d", &ln);
ln2=ln*2;

for (i=1; i <= ln2; i++){
    if(i%2!=0){
        for (j=1; j <= (ln2-i)/2; j++){
            putchar(' ');
        }    for (j=1; j <= i; j++){
            putchar('*');
        }
        for (j=1; j <= (ln2-i)/2; j++){
            putchar(' ');
        }
        putchar('\n');
    }
}


return(0);
}

