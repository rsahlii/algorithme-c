#include <stdio.h>

int main(void){
    int temp, min, max;
    printf("Entrez une suite d'entiers,(la suite se terminera avec la valeur 0): ");
    scanf("%d", &temp);

    if (temp != 0){
        min = max = temp;
        
        while (temp != 0){
            if (temp < min){
                min = temp;
            }
            if (temp > max){
                max = temp;
            }
            scanf("%d", &temp);
        }

        printf("Le minimum de la suite d'entiers saisies est %d\n", min);
        printf("Le maximum de la suite d'entiers saisies est %d\n", max);
    }

    return 0;
}