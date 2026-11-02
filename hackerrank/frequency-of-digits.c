#include <stdio.h>
#include <ctype.h>
int main(void){
    int n = 10;
    int frequence[10] = {0};
    char s[1000];
    scanf("%s", s);
    int valeur;
    int i = 0;
    
    while (s[i] != '\0'){
        if (isdigit(s[i])){
            valeur = s[i] - '0';
            frequence[valeur]++;
        }    
        i++;
    }

    for (int i = 0; i < n; i++){
        printf("%d ", frequence[i]);
    }

    return 0;
}