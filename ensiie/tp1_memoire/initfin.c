// Dans un programme initfin.c, créez une fonction qui crée et renvoie un pointeur sur un entier
// égal à 0, puis une autre fonction qui prend un pointeur en entrée et libère la mémoire associée à
// ce pointeur.

#include <stdio.h>
#include <stdlib.h>

int* creation_pointeur(void){
    int* p = malloc(sizeof(int)); 
    *p = 0;
    return p;
}

void liberation_memoire(int *p){
    free(p);
}

int main(void){
    int* p = creation_pointeur();
    
    printf("--- Avant libération mémoire --- \n");
    printf("Adresse mémoire : %p\n", p);
    printf("Valeur : %d\n", *p);
    
    liberation_memoire(p);
    
    printf("--- Après libération mémoire --- \n");
    printf("Adresse mémoire : %p\n", p);
    printf("Valeur : %d\n", *p);

    return 0;
}