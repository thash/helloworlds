#include <stdio.h>

int main(void)
{
   int uniprice, q;
   int th1=1000;
   int th2=5000;
   printf("enter the unit price: "); scanf("%d", &uniprice);
   printf("enter quantity: "); scanf("%d", &q);


   if (uniprice*q < th1) {
       printf("total price: %d \n", (int)(uniprice*0.95)*q);
   } else if (th1 <= uniprice*q && uniprice*q < th2) {
       printf("total price: %d \n", (int)(uniprice*0.90)*q);
   } else if (th2 <= uniprice*q) {
       printf("total price: %d \n", (int)(uniprice*0.85)*q);
   } else {
       printf("total price: %d \n", uniprice*q);
   }
    return(0);
}

