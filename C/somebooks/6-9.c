#include <stdio.h>

int scan_unit(void){
    int tmp;
    do {
        printf("enter non-negative num: ");
        scanf("%d", &tmp);
        if (tmp < 0){
            puts("\a don't enter negative number!");
        }
    } while (tmp < 0);
    return (tmp);
}

int rev_int(int num){
    int tmp = 0;
    if(num > 0){
        do {
            tmp = tmp * 10 + num % 10;
            num /= 10;
        } while (num > 0);
    }
    return(tmp);
}


int main(void) {
    int nx = scan_unit();
    printf("reversed value is %d.\n", rev_int(nx));

    return(0);
}

/*
*rev_int(0)
tmp=0, num=0
if (0 > 0) -> skip
return tmp = 0

*rev_int(1)
tmp=0, num=1
if (1 > 0) -> true
  tmp = 0 * 10 + 1 % 10 = 1
  num = num / 10 = 1 / 10 = 0
while (num > 0) -> false
return tmp=1

*rev_int(321)
tmp=0, num=321
if(321>0) -> true
  tmp = 0 * 10 + 321 % 10 = 1
  num = num / 10 = 321 / 10 = 32
while(num = 32 > 0) -> true
  tmp = 1 * 10 + 32 % 10 = 10 + 2 = 12
  num = 32 / 10 = 3
while(num = 3 > 0) -> true
  tmp = 12 * 10 + 3 % 10 = 120 + 3 = 123
  num = 3 / 10 = 0
while(num = 0 > 0) -> false, loop end
return tmp=123
*/
