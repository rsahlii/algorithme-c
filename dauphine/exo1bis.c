#include <stdio.h>

int main(void){
    double x, y;
    printf("Entrez deux réels : ");
    scanf("%lf %lf", &x, &y);
    printf("%f * %f = %f\n", x, y, x*y);
    return 0;
}