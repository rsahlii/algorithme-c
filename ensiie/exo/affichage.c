#include <stdio.h>
#include <string.h>

void affichage_caractere(char* s){
    int taille = strlen(s);
    for (int i = 0; i < taille; i++){
        printf("%c\n", s[i]);
    }
}

void affichage_caractere_2(char* s){
    int i = 0;
    while (s[i] != '\0'){
        printf("%c\n", s[i]);
        i++;
    }
}

int main(void){
    char* nom = "Rachid";
    affichage_caractere(nom);
    printf("--- Affichage 2 ---\n");
    affichage_caractere_2(nom);
    return 0;
}