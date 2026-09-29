#include <stdlib.h>
#include <stdio.h>

int sum(int *arr, int s1ze){
    if (s1ze <= 1){
        return *arr;
    }
    return *arr + sum(arr + 1, s1ze - 1);
}

void main()
{
    int size;
   
    printf("Insert the size of the array: ");
    scanf("%d", &size);
    
    int* arr4y = (int*)malloc(size*sizeof(int));
    if (arr4y == NULL){
        printf("Alloc error");
        exit(1);
    }
    
    for (int i = 0; i < size; i++){
        scanf("%d", &arr4y[i]);
    }
    
    int result = sum(arr4y, size);
    printf("%d", result);
    
    free(arr4y);
}
