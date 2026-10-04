#include <stdio.h>

int main(void){
    char ch;
    char mot[50];
    char phrase[100];
    
    scanf("%c", &ch);
    printf("%c\n", ch);

    scanf("%s", mot);
    printf("%s\n", mot);

    scanf("\n");
    scanf("%[^\n]%*c", phrase);
    printf("%s\n", phrase);
    
    return 0;
}