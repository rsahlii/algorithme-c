#include <stdio.h>
#include <ctype.h>

int is_number(char* chaine){
    int i = 0;
    
    if (chaine[0] == '\0'){
        return 0;
    }

    while (chaine[i] != '\0'){
        if (!isdigit(chaine[i])){
            return 0;
        }
        i++;
    }
    return 1;
}

int main(void){
    char* mot = "1111";
    
    int resultat = is_number(mot);

    if (resultat){printf("DIGIT\n");}
    else {printf("CHARACTER\n");}

    return 0;
}