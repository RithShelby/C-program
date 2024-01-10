#include <stdio.h>
#include <stdlib.h>
int main(){
    randomize();
    _setcursortype(0);
    do{
        printf("%5d",random(100));
    } while (!kbhit());
    getc();
    getc();
}
