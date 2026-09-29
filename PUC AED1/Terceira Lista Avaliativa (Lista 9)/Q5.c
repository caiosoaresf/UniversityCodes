#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int FillValues(int arr4y[10]) {
    int count = 0;
    int num;
    for (int i = 0; i < 10; i++) {
        printf("Insert the value for the array: ");
        scanf("%d", &num);
        arr4y[i] = num;
        if (num < 0) {
            count += 1;
        }
    }
    return count;
}

void CopyNegatives(int arr4y[], int count) {
    int arrayN[count + 1];
    int j = 0;
    for (int i = 0; i < 10; i++) {  
        if (arr4y[i] < 0) {
            arrayN[j] = arr4y[i];
            j++;
        } 
    }
    arrayN[j] = 0;
    for (int i = 0; i < j + 1; i++) {
        printf("%d", arrayN[i]);
    }
}

int main() {
    int arrayX[10];
    int result = FillValues(arrayX);
    CopyNegatives(arrayX, result);
    return 0;
}
