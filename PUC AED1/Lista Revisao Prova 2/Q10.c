#include <stdlib.h>
#include <stdio.h>

void inverting(int *arr, int s1ze){
    int *start = arr;
    int *end = arr + s1ze - 1;
    
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
}

void main() {
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
    
    inverting(arr4y,size);
    for (int i = 0; i < size; i++){
        printf("%d", arr4y[i]);
    }
    free(arr4y);
}
