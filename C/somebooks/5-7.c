#include <stdio.h>

int main(void) {

    int i,k,l;
    int mx[2][3] = {{1,2,3},
                    {4,5,6}};
    int my[3][2] = {{1,5},
                    {5,3},
                    {8,1}};
    /*int mc[2][2] = {0};*/
    int mz[2][2] = {0};

/* one by one
mc[0][0] = mx[0][0]*my[0][0] + mx[0][1]*my[1][0] + mx[0][2]*my[2][0];
# for i in 0..2       mc[0][0] += mx[0][i]*my[i][0];
mc[0][1] = mx[0][0]*my[0][1] + mx[0][1]*my[1][1] + mx[0][2]*my[2][1];
# for i in 0..2       mc[0][1] += mx[0][i]*my[i][1];
mc[1][0] = mx[1][0]*my[0][0] + mx[1][1]*my[1][0] + mx[1][2]*my[2][0];
# for i in 0..2       mc[1][0] += mx[1][i]*my[i][0];
mc[1][1] = mx[1][0]*my[0][1] + mx[1][1]*my[1][1] + mx[1][2]*my[2][1];
# for i in 0..2       mc[1][1] += mx[1][i]*my[i][1];

printf("mc[0][0] = mx[0][0]*my[0][0] + mx[0][1]*my[1][0] + mx[0][2]*my[2][0]\n");
printf("mc[0][0] = %d\n", mc[0][0]);
printf("mc[0][1] = mx[0][0]*my[0][1] + mx[0][1]*my[1][1] + mx[0][2]*my[2][1]\n");
printf("mc[0][1] = %d\n", mc[0][1]);
printf("mc[1][0] = mx[1][0]*my[0][0] + mx[1][1]*my[1][0] + mx[1][2]*my[2][0]\n");
printf("mc[1][0] = %d\n", mc[1][0]);
printf("mc[1][1] = mx[1][0]*my[0][1] + mx[1][1]*my[1][1] + mx[1][2]*my[2][1]\n");
printf("mc[1][1] = %d\n", mc[1][1]);
*/

for (i = 0; i < 2; i++){ /*mz[i][]*/
    for (k = 0; k < 2; k++){ /*mz[][k]*/
        for (l = 0; l < 3; l++){
            mz[i][k] += mx[i][l]*my[l][k];
        }
    }
}

/* row and column name
 for (row = 0; row < 2; row++) {
    for (column = 0; column < 2; column++) {
      for (i = 0; i < 3; i++) {
 z[row][column] += x[row][i] * y[i][column];
      }
    }
  }
*/

printf("matrix x\n");
for (i = 0; i < 2; i++){ for (k = 0; k < 3; k++){ printf("%3d", mx[i][k]); } putchar('\n'); }

printf("matrix y\n");
for (i = 0; i < 3; i++){ for (k = 0; k < 2; k++){ printf("%3d", my[i][k]); } putchar('\n'); }

printf("ANSWER: x * y\n");
for (i = 0; i < 2; i++){ for (k = 0; k < 2; k++){ printf("%3d", mz[i][k]); } putchar('\n'); }

/* print test
printf("mz[0][0] = %d\n", mz[0][0]);
printf("mz[0][1] = %d\n", mz[0][1]);
printf("mz[1][0] = %d\n", mz[1][0]);
printf("mz[1][1] = %d\n", mz[1][1]);
*/

    return(0);
}
