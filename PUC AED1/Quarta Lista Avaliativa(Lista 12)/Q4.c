#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *arr4y;
    char l3tter;
    int num1;
    float num2;
    int i = 0;
    char *ptr1;
    int *ptr2;
    float *ptr3;
    
    arr4y = (int*)malloc(3 * sizeof(int));
    if (arr4y == NULL) {
        printf("Error in memory allocation.\n");
        exit(1);
    }
    
    printf("Insert the char: ");
    scanf("%c", &l3tter);
    arr4y[i] = l3tter;
    printf("%c\n", arr4y[i]);
    i++;
    ptr1 = &l3tter;
    printf("%p\n", ptr1);
    
    printf("Insert the int: ");
    scanf("%d", &num1);
    arr4y[i] = num1;
    printf("%d\n", arr4y[i]);
    i++;
    ptr2 = &num1;
    printf("%p\n", ptr2);
    
    printf("Insert the float: ");
    scanf("%f", &num2);
    arr4y[i] = num2;
    printf("%f\n", (float)arr4y[i]);
    ptr3 = &num2;
    printf("%p\n", ptr3);
    
    free(arr4y);
    return 0;
}
