#include <stdio.h>

int abs(int a){
    return (a < 0) ? -a : a;
}

void update(int *a, int *b){
    int temp_a = *a;
    int temp_b = *b;
    *a = temp_a + temp_b;
    *b = abs(temp_a - temp_b);
}

int main(void){
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}