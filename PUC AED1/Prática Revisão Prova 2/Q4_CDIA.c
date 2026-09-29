#include <stdlib.h>
#include <stdio.h>

int SumUnderDiagonal(int size) {
    int **matrix = (int**)malloc(size * sizeof(int*));
    int totalSum = 0;
    double sum = 0.0;
    
    if (matrix == NULL) {
        printf("Alloc error");
        exit(1);
    }
    
    for (int i = 0; i < size; i++) {
        matrix[i] = (int*)malloc(size * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Allocation error");
            exit(1);
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Insert the values of the matrix: ");
            scanf("%d", &matrix[i][j]);
            totalSum += matrix[i][j];
        }
    }

    double average = (double)totalSum / (size * size);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] > average) {
                sum += matrix[i][j];
            }
        }
    }

    for (int i = 0; i < size; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return (int)sum;
}

int main() {
    int size;
    
    printf("Insert the order of the matrix: ");
    scanf("%d", &size);
    
    int result = SumUnderDiagonal(size);
    printf("The sum of elements greater than average mean is: %d", result);
    
    return 0;
}
