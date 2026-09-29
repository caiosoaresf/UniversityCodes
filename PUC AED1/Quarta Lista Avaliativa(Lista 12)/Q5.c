#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *arr4y;
    int s1ze;
    int count3r = 0;
    int n;
    
    printf("Insert the size of the array: ");
    scanf("%d", &s1ze);
    
    arr4y = (int*)malloc(s1ze * sizeof(int));
    if (arr4y == NULL) {
        printf("Error in memory allocation.\n");
        exit(1);
    }
    
    for (int i = 0; i < s1ze; i++){
        printf("Insert the value of the position: ");
        scanf("%d", &n);
        arr4y[i] = n;
    }
    
    printf("Insert the number you want to check how much times it repeat: ");
    scanf("%d", &n);
    
    for (int i = 0; i < s1ze; i++){
        if (arr4y[i] == n){
            count3r += 1;
        }
    }
    printf("%d repeats %d times", n, count3r);
    
    free(arr4y);
    return 0;
}
