#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* ArraySub(int arr4yA[10], int arr4yB[10]){
    int* arrayC = malloc(10 * sizeof(int));;
    for(int i = 0; i < 10; i++){
        arrayC[i] = arr4yA[i] - arr4yB[i];
    }
    return arrayC;
}

int main()
{
    int arrayA[10];
    int arrayB[10];
    int num;
    
    for (int i = 0; i < 10; i++){
        printf("Insert the value for A: ");
        scanf("%d", &num);
        arrayA[i] = num;
        printf("Insert the value for B: ");
        scanf("%d", &num);
        arrayB[i] = num;
    }
  
    int* arrayC = ArraySub(arrayA,arrayB);
    for (int i = 0; i < 10; i++){
        printf("%d\n", arrayC[i]);
    }
    
    free(arrayC);
    return 0;
}
