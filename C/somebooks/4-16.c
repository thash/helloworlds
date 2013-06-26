#include <stdio.h>

int main(void) {
    int cont;

    do {
        int num, i;

        do {
            printf("hihu no seisuu wo nyuuryoku: ");
            scanf("%d", &num);
            if (num < 0) {
                puts("\a hu no kazuwo nyuuryoku sunnna");
            }
        } while (num < 0);

        for (i = 1; i <= num; i++) {
            putchar('*');
        } putchar('\n');
        printf("again?. yes...0/No...9: "); scanf("%d",&cont);
    } while (!cont);

    return(0);
}
