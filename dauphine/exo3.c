#include <stdio.h>

int main(void){
    
    for (char c = 'A'; c <= 'z'; c++){
        printf("caractère = %c          code = %d          code hexa = %x\n", c, c, c);
    }

    for (char c = '1'; c <= '9'; c++){
        printf("caractère = %c          code = %d          code hexa = %x\n", c, c, c);
    }

    return 0;
}