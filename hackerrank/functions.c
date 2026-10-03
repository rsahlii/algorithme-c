#include <stdio.h>

int max(int a, int b){
    return (a > b) ? a : b;
}

int int_max_of_four(int a, int b, int c, int d){
    return max(max(a, b), max(c, d));
}

int main(void){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max = int_max_of_four(a, b, c, d);
    printf("%d\n", max);
    return 0;
}