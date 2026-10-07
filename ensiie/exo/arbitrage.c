#include <stdio.h>

void min_max(double tab[], int n, double* min, double*max){
    *min = *max = tab[0];
    
    for (int i = 1; i < n; i++){
        if (tab[i] < *min){
            *min = tab[i];
        }
        if (tab[i] > *max){
            *max = tab[i];
        }
    }
}

int main(void){
    int n;
    double min, max, seuil_arbitrage;

    printf("Entrez le nombre de marchés: "); scanf("%d", &n);
    while(n <= 0){
        printf("Erreur! Entrez un entier positif.");
        scanf("%d", &n);
    }

    double tab[n];

    for (int i = 0; i < n; i++){
        printf("Entrez le prix %d: ", i+1); scanf("%lf", &tab[i]);
    }

    printf("Seuil d'arbitrage: "); scanf("%lf", &seuil_arbitrage);

    min_max(tab, n, &min, &max);
    printf("Prix Minimum: %lf\nPrix Maximum: %lf\nÉcart: %.2f\n", min, max, (max-min));

    if ((max-min) >= seuil_arbitrage){
        printf("Opportunité d'arbitrage détectée !");
    }
    else{
        printf("Pas d'opportunité d'arbitrage !");
    }

    return 0;
}