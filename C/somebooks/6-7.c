#include <stdio.h>

void put_stars(int no){
    while (no-- > 0){
        putchar('*');
    }
}

int main(void) {
    int i, ln;

    printf("stairs no?: ");
    scanf("%d", &ln);

    for(i =1; i <= ln; i++){
        put_stars(i);
        putchar('\n');
    }
    return(0);
}
