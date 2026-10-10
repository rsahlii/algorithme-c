#include <stdio.h>

void min_max(double tab[], int n, 
            double* min, double* max,
            int* indice_min, int* indice_max){
    
    *min = *max = tab[0];
    *indice_min = *indice_max = 0;
    
    for (int i = 1; i < n; i++){
        if (tab[i] < *min){
            *min = tab[i];
            *indice_min = i;
        }
        if (tab[i] > *max){
            *max = tab[i];
            *indice_max = i;
        }
    }
}

int main(void){
    int n, indice_mini, indice_maxi;
    double min, max, seuil_arbitrage;

    printf("Entrez le nombre de marchés: "); scanf("%d", &n);
    while(n <= 0){printf("Erreur! Entrez un entier positif."); scanf("%d", &n);}

    double tab[n];

    for (int i = 0; i < n; i++){
        printf("Entrez le prix %d: ", i+1); scanf("%lf", &tab[i]);
    }

    min_max(tab, n, &min, &max, &indice_mini, &indice_maxi);

    printf("Seuil d'arbitrage: "); scanf("%lf", &seuil_arbitrage);

    printf("Prix Minimum: %.2lf (marché %d, indice %d)\n", min, indice_mini+1, indice_mini);
    printf("Prix Maximum: %.2lf (marché %d, indice %d)\n", max, indice_maxi+1, indice_maxi);
    printf("Écart: %.2lf\n", (max-min));
    if (min > 0){
        printf("Écart en pourcentage: %.2lf %%\n", (max-min)/min*100);
    }

    if ((max-min) >= seuil_arbitrage){
        printf("Opportunité d'arbitrage détectée !\n");
        printf("Acheter sur le marché %d et vendre sur le marché %d\n", indice_mini+1, indice_maxi+1);
    }
    else{
        printf("Pas d'opportunité d'arbitrage !");
    }

    return 0;
}