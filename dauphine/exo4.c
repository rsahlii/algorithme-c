#include <stdio.h>

int main(void){
    int x;
    printf("Entrez un entier : ");
    scanf("%d", &x);
    
    if (x % 2 == 0){
        printf("L'entier %d est pair\n", x);
    }
    else{
        printf("L'entier %d est impair\n", x);
    }
    return 0;
}