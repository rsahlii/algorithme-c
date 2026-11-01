#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    
    int i2 = 0;
    int j = num-1;    
    int temp;
    
    while (i2 < j){
        temp = arr[i2];
        arr[i2] = arr[j];
        arr[j] = temp;
        i2++;
        j--;
    }


    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
