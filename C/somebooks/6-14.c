#include <stdio.h>

#define NUMBER 5
#define FAILED -1

int search(const int vc[], int key, int no){
    int i = 0;

    while (1) {
        if (i == no) {
            return (FAILED);
        }
        if (vc[i] == key){
            return (i);
        }
        i++;
    }
}

int main(void){
    int i, ky, idx;
    int vx[NUMBER];

    for ( i=0; i<NUMBER; i++){
        printf("vx[%d]: ", i);
        scanf("%d", &vx[i]);
    }

    printf("search num?: "); scanf("%d", &ky);

    idx = search(vx, ky, NUMBER);

    if (idx == FAILED){
        puts("search failed!");
    } else {
        printf("%d exists in number %d.\n", ky, idx + 1);
    }

    return (0);
}
