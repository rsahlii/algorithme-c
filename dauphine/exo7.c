#include <stdio.h>

int main(void){
    int x;
    printf("Entrez un entier : "); scanf("%d", &x);
    for (int i = 2; i <= x; i++){
        if (x % i == 0){
            printf("%d est un diviseur de %d\n", i, x);
        }
    }
    return 0;
}