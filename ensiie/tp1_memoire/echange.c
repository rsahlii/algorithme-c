// Dans un programme echange.c, créez une fonction qui prend en entrée 3 entiers a, b et c.
// À l’issue de la fonction, 
// — b a la valeur que a avait au début de la fonction
// — c a la valeur que b avait au début de la fonction
// — a a la valeur que c avait au début de la fonction

#include <stdio.h>

void echange(int *a, int *b, int *c){
    int temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}

int main(void){
    int a, b, c;
    printf("Entrez trois entiers :\n");
    printf("--- Avant échange ---\n");
    printf("a = "); scanf("%d", &a);
    printf("b = "); scanf("%d", &b);
    printf("c = "); scanf("%d", &c);
    echange(&a, &b, &c);
    printf("--- Après échange ---\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    
    return 0;
}