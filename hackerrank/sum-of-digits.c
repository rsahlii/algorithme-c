#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    int resultat = n;
    int dernier_chiffre;
    int somme = 0;


    while (resultat != 0){
        dernier_chiffre = resultat % 10;
        resultat = (resultat / 10);
        somme += dernier_chiffre;
    }

    printf("%d\n", somme);

    return 0;
}