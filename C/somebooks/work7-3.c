#include <stdio.h>

int main(void)
{
    int i, principal, period; 
    double  tmprate, rate, discountRate=1.0;

    printf("enter principal: "); scanf("%d", &principal);
    printf("enter rate (%%): "); scanf("%lf", &tmprate);
    printf("enter period: "); scanf("%d", &period);

    rate=tmprate*0.01;

    for (i=1; i<= period; i++){

        discountRate *= (1+rate); 

        /*printf("sum of interest: %.f yen\n", discountRate);*/

        printf("\n*** year %d ***\n", i);
        printf("discountRate: %f\n", discountRate);
        printf("sum of principal+interest: %.f yen\n", principal*discountRate);
        /* use "principal / discountRate" for present value */

    }
    printf("\n\ncheck the Rule of 72 ... required years/rate for double the principal is \n");
    printf("under the current rate %.2f (%%), required years: %.2f\n", rate*100, 72/(rate*100));
    printf("under the current investment years %d, required rate: %.2f\n", period, 72/(double)period);

    return(0);
}
