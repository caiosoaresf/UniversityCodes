#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *arr4y;
    int s1ze;
    
    printf("Insert the size of the array: ");
    scanf("%d", &s1ze);
    
    arr4y = (int*)malloc(s1ze * sizeof(int));
    if (arr4y == NULL) {
        printf("Error in memory allocation.\n");
        exit(1);
    }
    
    for (int i = 0; i < s1ze; i++) {
        int n;
        printf("Insert the value of the position: ");
        scanf("%d", &n);
        arr4y[i] = n;
        printf("%d\n", arr4y[i]);
    }
    
    free(arr4y);
    return 0;
}
