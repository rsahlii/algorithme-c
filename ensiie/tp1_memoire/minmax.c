// Dans un programme minmax.c, créez une fonction qui prend en entrée un entier n, un tableau
// tab contenant n entiers et 2 pointeurs sur entiers min et max. Cette fonction doit mettre à l’adresse
// pointée par min et max respectivement la plus petite et la plus grande valeur des entiers contenu
// dans tab. La fonction ne renvoie rien.

#include <stdio.h>

int minimum(int tableau[], int n){
    int minimum = tableau[0];
    
    for (int i = 0; i < n; i++){
        if (tableau[i] < minimum){
            minimum = tableau[i];
        }
    }
    return minimum;
}

int maximum(int tableau[], int n){
    int maximum = tableau[0];

    for (int i = 0; i < n; i++){
        if (tableau[i] > maximum){
            maximum = tableau[i];
        }
    }

    return maximum;
}

void adresse_min_max(int n, int tableau[], int* min, int* max){  
    *min = minimum(tableau, n);
    *max = maximum(tableau, n);
}

int main(void){
    int n, min, max;
    n = 5;
    int tab[5] = {3, 4, 9, -1, 43};

    adresse_min_max(n, tab, &min, &max);

    printf("Minimum : %d\n", min);
    printf("Maximum : %d\n", max);

    return 0;
}