#include <stdio.h>
int main(void){int i,k;k=100;for(i=1;i<=k;i++)i%15?i%5?i%3?printf("%d\n",i):puts("Fizz"):puts("Buzz"):puts("FizzBuzz");return(0);}
        /* i%15==0 ? printf("FizzBuzz\n") : i%5==0 ? printf("Buzz\n") : i%3==0 ? printf("Fizz\n") : printf("%d\n", i);*/


