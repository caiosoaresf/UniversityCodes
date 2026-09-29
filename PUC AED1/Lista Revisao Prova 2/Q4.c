#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int BiggestValue(int *arr4y, int s1ze){
    int Biggest;
    if (s1ze == 1){
        return *arr4y;
    }
    Biggest = BiggestValue(arr4y+1, s1ze-1);
    if (*arr4y > Biggest){
        return *arr4y;
    } else {
        return Biggest;
    }
}

void main()
{
    int siz;
    int result;
    
    printf("Insert the size of the array: ");
    scanf("%d", &siz);
    
    int integers[siz];
    for (int i = 0; i < siz; i++){
        printf("Insert the value in this position: ");
        scanf("%d", &integers[i]);
    }
    
    result = BiggestValue(integers, siz);
    printf("The biggest value is %d", result);
}
