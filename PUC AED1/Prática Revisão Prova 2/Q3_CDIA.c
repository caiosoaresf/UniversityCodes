#include <stdlib.h>
#include <stdio.h>

float product(float *arr, int size) {
    if (size == 0) {
        return 1.0;
    }
    return *arr * product(arr + 1, size - 1);
}

int main() {
    int size;
   
    printf("Insert the size of the array: ");
    scanf("%d", &size);
    
    float *array = (float*)malloc(size * sizeof(float));
    if (array == NULL) {
        printf("Error!\n");
        exit(1);
    }
    
    printf("Insert the %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%lf", &array[i]);
    }
    
    float result = product(array, size);
    printf("The product is: %.2f\n", result);
    
    free(array);
    return 0;
}
