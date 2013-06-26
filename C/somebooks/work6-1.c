#include <stdio.h>

int main(void)
{
    int sum;

    printf("depreciation of asset - 3000000 yen\n");
    printf("useful life    -  5 years\n");
    printf("residual value - 10 %%\n");

    printf("year 1: %d yen, AD: %d yen\n", (int)((3000000*0.9)*(5.0/(1+2+3+4+5))), (int)((3000000*0.9)*((5.0)/(1+2+3+4+5))) );
    printf("year 2: %d yen, AD: %d yen\n", (int)((3000000*0.9)*(4.0/(1+2+3+4+5))), (int)((3000000*0.9)*((5.0+4.0)/(1+2+3+4+5))) );
    printf("year 3: %d yen, AD: %d yen\n", (int)((3000000*0.9)*(3.0/(1+2+3+4+5))), (int)((3000000*0.9)*((5.0+4.0+3.0)/(1+2+3+4+5))) );
    printf("year 4: %d yen, AD: %d yen\n", (int)((3000000*0.9)*(2.0/(1+2+3+4+5))), (int)((3000000*0.9)*((5.0+4.0+3.0+2.0)/(1+2+3+4+5))) );
    printf("year 5: %d yen, AD: %d yen\n", (int)((3000000*0.9)*(1.0/(1+2+3+4+5))), (int)((3000000*0.9)*((5.0+4.0+3.0+2.0+1.0)/(1+2+3+4+5))) );

    printf("\n");
    printf("AD: accumulated depreciation\n");
    printf("\n");

    return(0);
}

