#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int SumUnderDiagonal(int size) {
    int sum = 0;
    int **matriz = (int**)malloc(size * sizeof(int*));
    if (matriz == NULL) {
        printf("Alloc error");
        exit(1);
    }
    
    for (int i = 0; i < size; i++) {
        matriz[i] = (int*)malloc(size * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Allocation error");
            exit(1);
        }
    }
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Insert the values of the matrix: ");
            scanf("%d", &matriz[i][j]);
            if (i > j) {
                sum += matriz[i][j];
            }
        }
    }
    
    free(matriz);
    
    return sum;
}

int main() {
    int size;
    srand(time(NULL));
    
    printf("Insert the order of the matrix: ");
    scanf("%d", &size);
    
    int result = SumUnderDiagonal(size);
    printf("The sum under the main diagonal is: %d", result);
    
    return 0;
}
