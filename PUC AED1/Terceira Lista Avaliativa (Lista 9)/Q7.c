#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAX 100

void FillMatrix(int array1[][MAX], int quantity) {
    srand(time(NULL));
    for (int i = 0; i < quantity; i++) {
        for (int j = 0; j < quantity; j++) {
            array1[i][j] = rand() % 100 + 1;
            printf("%d ",array1[i][j]);
        }
        printf("\n");
    }
}

void SumMainDiagonal(int array1[][MAX], int quantity) {
    int sum = 0;
    for (int i = 0; i < quantity; i++) {
        for (int j = 0; j < quantity; j++){
            sum += array1[i][j];
        }
    }
    printf("The sum of the values of the Main Diagonal is: %d\n", sum);
}

void SumUnderDiagonal(int array1[][MAX], int quantity){
    int sum = 0;
    for (int i = 0; i < quantity; i++){
        for (int j = 0; j < i; j++){
            sum += array1[i][j];
        }
    }
    printf("The sum of the vales under the Main Diagonal is: %d\n", sum);
}

int main() {
    int quant;
    
    printf("Insert the number of lines in the Matrix: ");
    scanf("%d", &quant);
    
    int arr4y[quant][MAX];
    FillMatrix(arr4y, quant);
    SumMainDiagonal(arr4y, quant);
    SumUnderDiagonal(arr4y, quant);
    
    return 0;
}
