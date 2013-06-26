#include <stdio.h>

int fx = 0; /*static strage duration*/

void func(void){
static int sx = 0; /*static strage duration*/
int ax = 0; /*automatic strage duration, explicitly: auto int*/

printf("%3d%3d%3d\n", ax++, sx++, fx++);
}

int main(void){
    int i;

puts(" ax sx fx");
puts("---------");
for (i = 0; i < 10; i++){
func();
}
puts("---------");
    return(0);

}
