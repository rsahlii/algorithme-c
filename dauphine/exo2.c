#include <stdio.h>

int main(void){
    int x, y, temp;
    printf("Entrez deux entiers : ");
    scanf("%d %d", &x, &y);
    printf("Avant échange : x = %d, y = %d\n", x, y);
    
    // Échange
    temp = x;
    x = y;
    y = temp;

    printf("Après échange : x = %d, y = %d\n", x, y);

    return 0;
}