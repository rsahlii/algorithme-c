#include <stdio.h>

int main(void){
    int x;
    printf("Afficher la table de multiplication de l'entier de votre choix: ");
    scanf("%d", &x);

    for (int i = 0; i <= 10; i++){
        printf("%d * %d = %d\n", x, i, x*i);
    }

    return 0;
}