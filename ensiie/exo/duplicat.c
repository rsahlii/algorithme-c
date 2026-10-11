#include <stdio.h>

void modif_chaine(char* c, char* s, char* t){
    int i = 0;
    int j = 0;

    while (s[i] != '\0'){
        c[i] = s[i];
        i ++;
    }

    while (t[j] != '\0'){
        c[i] = t[j];
        i++;
        j++;
    }

    c[i] = '\0';
}

void modif_chaine_2(char* c, char* s, int n){
    if (n <= 0){
        c[0] = '\0';
        return ;
    }
    
    modif_chaine(c, s, "");

    for (int k = 1; k < n; k++){
        modif_chaine(c, c, s);
    }
}

int main(void){
    char s1[50] = "Toto";
    char* s2 = "Tata";
    char* s3 = "Titi";

    printf("Test 1 \n");
    printf("Avant changement: %s\n", s1);
    modif_chaine(s1, s2, s3);
    printf("Après changement: %s\n", s1);

    printf("Test 2 \n");
    modif_chaine_2(s1, "Bla", 4);
    printf("Après changement: %s\n", s1);

    return 0;
}