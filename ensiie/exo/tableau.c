#include <stdio.h>
#include <stdbool.h>

bool appartient_tab(int size, int tableau[size], int m){
    for (int i = 0; i < size; i++){
        if (tableau[i] == m){return 1;}
    }
    return 0;
}

int main(void){
    int n = 4;
    int m = 9;
    int tab[4] = {1, 2, 3, 9};

    if (appartient_tab(n, tab, m)){
        printf("%d appartient au tableau.\n", m);
    }
    else {
        printf("%d n'appartient pas au tableau.\n", m);
    }

    return 0;
}