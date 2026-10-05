#include <stdio.h>

int main(void){
    int n;
    int somme = 0;
    
    printf("Afficher la somme de 1 à l'entier n > 10 de votre choix: ");
    scanf("%d", &n);
    
    while (n <= 10){
        printf("Erreur! Entrez un entier supérieur ou égale à 10: ");
        scanf("%d", &n);
    }

    for (int i = 0; i <= n; i++){
        somme += i;
    }

    printf("La somme de 1 à %d est égale à %d\n", n, somme);
    
    return 0;
}