#include <stdio.h>
#include <string.h>

int estpalindrome(const char* mot){
    int i = 0;
    int j = strlen(mot) - 1;

    while(i < j){
        if (mot[i] != mot[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main(void){
    char* mot1 = "bob";
    char* mot2 = "Julien";

    printf("Test avec le mot %s : %d\n", mot1, estpalindrome(mot1));
    printf("Test avec le mot %s : %d\n", mot2, estpalindrome(mot2));

    return 0;
}