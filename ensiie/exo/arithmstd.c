
#include <stdio.h>

int main(void) {
    int x, z;

    scanf("%d %d", &x, &z);

    printf("Somme = %d, Soustraction = %d, Produit = %d\n",
           x + z, x - z, x * z);

    if (z == 0) {
        fprintf(stderr,
                "Erreur : division par zero impossible.\n");
    } else {
        printf("Division = %f\n", (double)x / z);
    }

    return 0;
}
