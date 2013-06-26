#include <stdio.h>

int wa(int x, int y){
    return (x+y);
}

int sa(int x, int y){
    return (x-y);
}

int seki(int x, int y){
    return (x*y);
}

int main(void) {
    int n1, n2;
    
    puts("enter 2 integers");
    printf("integer 1: "); scanf("%d", &n1);
    printf("integer 2: "); scanf("%d", &n2);

    printf("the sum of 2 integers is: %d\n", wa(n1, n2));
    printf("when you subtract n2 from n1: %d\n", sa(n1, n2));
    printf("the product of 2 integers is: %d\n", seki(n1, n2));

    return(0);
}
