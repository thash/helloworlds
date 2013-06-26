#include <stdio.h>

#define NUMBER 5

int main(void)
{
    int i,k, query, foundFlag=0;
    int ary[NUMBER];

    for (i=1; i<=NUMBER; i++){
        printf("enter value for No.%d :", i);
        scanf("%d", &ary[i]);
    }

    printf("\nsearch num? :"); scanf("%d", &query);

    for (i=1; i<=NUMBER; i++){
        if (ary[i] == query) {
            printf("\n%d exists in No.%d\n", query, i);
            foundFlag = 1; break;
        } 
    }
    if (foundFlag==0) {
        puts("not found");
    }
    return(0);
}
