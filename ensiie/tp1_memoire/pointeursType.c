#include <stdio.h>
#include <stdlib.h>

int** pointeurs(int n, int *l){
    int nb_pairs = 0;
    int nb_impairs = 0;

    for (int i = 0; i < n; i++){
        if (l[i] % 2 == 0){
            nb_pairs++;
        }
        else {
            nb_impairs++;
        }
    }

    int* ppairs = malloc((nb_pairs + 1) * sizeof(int));
    int* pimpairs = malloc((nb_impairs + 1) * sizeof(int));

    ppairs[0] = nb_pairs;
    pimpairs[0] = nb_impairs;

    ip = 1;
    ii = 1;

    for (i = 0; i < n; i++){
        if (l[i] % 2 == 0){
            ppairs[ip] = l[i];
            ip++;
        }
        else {
            pimpairs[ii] = l[i];
            ii++;
        }
    }

    int **p = malloc(2 * sizeof(int *));

    p[0] = ppairs;
    p[1] = pimpairs;

}

int main(void){
    int l[] = {12, 7, 4, 9, 2};
    int n = 5;
    return 0;
}