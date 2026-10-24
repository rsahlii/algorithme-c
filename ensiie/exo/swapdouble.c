#include <stdio.h>
#include <stdlib.h>

void swapdouble(double** a, double** b){
    double temp;
    temp = **a;
    **a = **b;
    **b = temp;
}

int main(void){
    double *d1 = (double*) malloc(sizeof(double));
    double *d2 = (double*) malloc(sizeof(double));

    if (d1 == NULL || d2 == NULL) return 1;
    
    *d1 = 2.0;
    *d1 = 4.0;
    
    printf("Avant : d1 = %f, Avant : d2 = %f\n", *d1, *d2);
    swapdouble(&d1, &d2);
    printf("Après : d1 = %f, Après : d2 = %f\n", *d1, *d2);
    
    free(d1);
    free(d2);
    return 0;
}