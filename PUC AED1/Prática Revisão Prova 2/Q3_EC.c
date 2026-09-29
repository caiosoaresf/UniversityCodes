#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int SumAboveDiagonal(int size) { 
    int sum = 0;
    int **matrix = (int**)malloc(size * sizeof(int*));
    if (matrix == NULL) {
        printf("Error");
        exit(1);
    }
    
    srand(time(NULL));
    
    for (int i = 0; i < size; i++) {
        matrix[i] = (int*)malloc(size * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Error");
            exit(1);
        }
    }
    
    printf("Generated matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 100 + 1;
            printf("%3d ", matrix[i][j]);  
            
            if (i < j) {
                sum += matrix[i][j];
            }
        }
        printf("\n"); 
    }
    
    for (int i = 0; i < size; i++) {
        free(matrix[i]);
    }
    free(matrix);
    
    return sum;
}

int main() {
    int size;
    
    printf("Insert the order of the matrix: ");
    scanf("%d", &size);
    
    int result = SumAboveDiagonal(size);
    printf("\nThe sum above the main diagonal is: %d", result);
    
    return 0;
}
