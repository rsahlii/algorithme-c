#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    int somme = 0;

    scanf("%d", &n);
    int* array = (int *)malloc(n * sizeof(int));

    if (n > 0){
        for (int i = 0; i < n; i++){
            scanf("%d", &array[i]);
            somme += array[i];
        }
    }

    else {
        free(array);
        return 1;    
    }

    printf("%d\n", somme);
    free(array);

    return 0;
}