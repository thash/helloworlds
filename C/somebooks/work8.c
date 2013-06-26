#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Goo: 1, Choki: 2, Pa: 3\n");
    printf("Player 1 hand: "); scanf("%d", &a);
    printf("Player 2 hand: "); scanf("%d", &b);

    /*1>2, 2>3, 3>1 */

    if ((a==1 && b==2) || (a==2 && b==3) || (a==3 && b==1)){
        printf("Winner: Player 1\n");
    } else if ((b==1 && a==2) || (b==2 && a==3) || (b==3 && a==1)){
        printf("Winner: Player 2\n");
    } else {
        printf("DRAW!\n");
    }


    return(0);
}

