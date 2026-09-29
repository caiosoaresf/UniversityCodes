#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ArraySum(int *arr, int siz) {
    int summing = 0;
    for (int i = 0; i < siz; i++) {
        arr[i] = rand() % 10 + 1;
        summing += arr[i];
    }
    return summing;
}

int main() {
    
    int *arr4y;
    int s1ze = 1000;
    srand(time(NULL));
    
    arr4y = (int*)malloc(s1ze * sizeof(int));
    if (arr4y == NULL) {
        printf("Error in memory allocation.\n");
        exit(1);
    }
    
    int sum = ArraySum(arr4y, s1ze);
    
    printf("Sum of array elements: %d\n", sum);
    
    free(arr4y);
    return 0;
}
