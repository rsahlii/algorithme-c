#include <stdio.h>

int main(void){
    int x, y, z, max;
    printf("Entrez trois entiers : \n");
    printf("Valeur 1 : "); scanf("%d", &x);
    printf("Valeur 2 : "); scanf("%d", &y);
    printf("Valeur 3 : "); scanf("%d", &z);
    
    if (x >= y){
        max = x;
    }
    else{
        max = y;
    }
    if (z >= max){
        max = z;
    }

    printf("Le maximum de %d, %d, %d, est %d\n", x, y, z, max);

    return 0;
}