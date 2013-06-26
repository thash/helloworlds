#include <stdio.h>

int main(void)
{
    int i;
    int loopflag=0;
    int asset, year, rv, type;
    double rv2, denom;
    int cost, sum;

    printf("\n");
    printf("depreciation of asset (yen): "); scanf("%d", &asset);
    printf("useful life         (years): "); scanf("%d", &year);
    printf("residual value          (%%): "); scanf("%d", &rv);

    rv2 = 1.0 - (double)rv/100.0;

    do {
        printf("depreciation type is series (1) or fixed (2): "); scanf("%d", &type);

        if (type == 1){
            loopflag = 0;
            denom = 0.0;
            for (i = 1; i<=year; i++) { denom += i; }

            sum = 0; cost = 0; 
            for (i = year; i >= 1; i--) {
                cost = (int)((asset*rv2)*(i/denom));
                sum += cost;
                printf("year %d: %d yen, AD: %d yen\n", year-i+1, cost, sum);
            }
        } else if (type == 2) {
            loopflag = 0;
            sum = 0; cost = 0; 
            for (i = 1; i <= year; i++) {
                cost = (int)((asset*rv2)*(1/(double)year));
                sum += cost;
                printf("year %d: %d yen, AD: %d yen\n", i, cost, sum);
            }
        } else {
            loopflag = 1;
            printf("enter 1 or 2.\n");
        }
    } while(loopflag);

    printf("\n");
    printf("AD: accumulated depreciation\n");
    printf("\n");

    return(0);
}
