#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numSize, int target, int* returnSize){
    for (int i = 0; i < numSize; i++){
        for (int j = i+1; j < numSize; j++){
            if (target == nums[i] + nums[j]){
                int* resultat = malloc(2 * sizeof(int));
                resultat[0] = i;
                resultat[1] = j;
                *returnSize = 2;
                return resultat;
            }
        }
    }
    
    *returnSize = 0;
    int* resultat = malloc(2 * sizeof(int));
    resultat[0] = 0; resultat[1] = 0;
    return resultat;
}

int main(void){
    int n = 5;
    int* nsize = malloc(sizeof(int));
    int tableau[5] = {2, 5, 5, 11};
    int target = 10;
    
    int* resultat = twoSum(tableau, n, target, nsize);
    
    printf("[%d, %d]\n", resultat[0], resultat[1]);
    printf("%d\n", *nsize);
    
    free(resultat);
    free(nsize);
    return 0;
}

