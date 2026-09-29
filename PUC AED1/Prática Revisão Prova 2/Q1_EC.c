#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int firstArray[20];
    int *secondArray;
    int countMultiples = 0;
    srand(time(NULL));

    for (int i = 0; i < 20; i++) {
        int num;
        do {
            num = rand() % 100 + 1;
            int isDuplicate = 0;
            for (int j = 0; j < i; j++) {
                if (firstArray[j] == num) {
                    isDuplicate = 1;
                    break;
                }
            }
            if (!isDuplicate) {
                firstArray[i] = num;
                break;
            }
        } while (1);
    }

    for (int i = 0; i < 20; i++) {
        if (firstArray[i] % 3 == 0) {
            countMultiples++;
        }
    }

    secondArray = (int*)malloc(countMultiples * sizeof(int));
    if (secondArray == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int *ptr = secondArray;
    for (int i = 0; i < 20; i++) {
        if (firstArray[i] % 3 == 0) {
            *ptr = firstArray[i];
            ptr++;
        }
    }

    printf("Original array:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", firstArray[i]);
    }

    printf("\n\nMultiples of 3:\n");
    for (int i = 0; i < countMultiples; i++) {
        printf("%d ", secondArray[i]);
    }

    free(secondArray);
    return 0;
}
