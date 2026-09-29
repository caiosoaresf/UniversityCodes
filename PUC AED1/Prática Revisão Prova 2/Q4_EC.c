#include <stdio.h>
#include <stdlib.h>

int recursiveSum(int *arr, int size) {
    if (size == 0) {
        return 0;
    }
    return *arr + recursiveSum(arr + 1, size - 1);
}

int main() {
    int n;
    int *v1;
    
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    v1 = (int*)malloc(n * sizeof(int));
    if (v1 == NULL) {
        printf("Allocation error");
        return 1;
    }
    
    printf("Enter %d integer elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &v1[i]);
    }
    
    printf("\nArray elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v1[i]);
    }
    
    int sum = recursiveSum(v1, n);
    printf("\nSum of elements: %d\n", sum);
    
    free(v1);
    return 0;
}
