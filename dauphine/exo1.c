#include <stdio.h>

int main(void){
    int x, y;
    printf("Entrez deux entiers : ");
    scanf("%d %d", &x, &y);
    printf("%d * %d = %d\n", x, y, x*y);
    return 0;
}