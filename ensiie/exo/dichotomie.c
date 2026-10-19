#include <stdio.h>

int dichotomie(int size, int tab[], int m) {
    int debut = 0;
    int fin = size - 1;

    while (debut <= fin) {
        int milieu = (fin + debut) / 2;

        if (tab[milieu] == m) {
            return milieu; 
        }
        else if (m < tab[milieu]) {
            fin = milieu - 1;
        }
        else {
            debut = milieu + 1;
        }
    }

    return -1;
}

int main(void) {
    int tableau[] = {10, 20, 30, 40, 50};
    int taille = 5;
    int cible = 40;

    int indice = dichotomie(taille, tableau, cible);

    if (indice != -1) {
        printf("Élément trouvé à l'indice : %d\n", indice);
    } else {
        printf("Élément non trouvé.\n");
    }

    return 0;
}