#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float* creation_pointeur(int n){    
    float *p = (float*)malloc(n * sizeof(float));

    for (int i = 0; i < n; i++){
        p[i] = log(i+1);
    }

    return p;
}

int main(void){
    int n = 5;
    float *p = creation_pointeur(n);

    if (p == NULL){
        return NULL;
    }

    for (int i = 0; i < n; i++){
        printf("%f\n", p[i]);
    }
    

    free(p);

    return 0;
}