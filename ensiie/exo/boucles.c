#include <stdio.h>

void table_multiplication(int n){
    for (int i = 0; i <= 10; i++){
        printf("%d * %d = %d\n", n, i, n*i);
    }
}

void log_d_n(int n, int d){
    int compteur = 0;
    int n_init = n;
    while (n > 1){
        n = n / d;
        compteur ++;
    }

    printf("Le log en bas %d de %d est %d\n", d, n_init, compteur);
}

int main(void){
    int n1, n2;
    int d;
    printf("Afficher la table de multiplication de l'entier de votre choix:");
    scanf("%d", &n1);

    table_multiplication(n1);

    printf("Afficher le log en base d de n\n");
    printf("Entrez d: "); scanf("%d", &d);
    printf("Entrez n: "); scanf("%d", &n2);
    
    log_d_n(n2, d);

    return 0;
}