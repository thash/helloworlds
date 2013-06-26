#include <stdio.h>

int main(void)
{
   int class, uniprice, q;
   printf("enter discount class: "); scanf("%d", &class);
   printf("enter the unit price: "); scanf("%d", &uniprice);
   printf("enter quantity: "); scanf("%d", &q);

   if (class == 1) {
       printf("total price: %d \n", (int)(uniprice*0.95)*q);
   } else if (class == 2) {
       printf("total price: %d \n", (int)(uniprice*0.90)*q);
   } else if (class == 3) {
       printf("total price: %d \n", (int)(uniprice*0.85)*q);
   } else {
       printf("total price: %d \n", uniprice*q);
   }
    return(0);
}

