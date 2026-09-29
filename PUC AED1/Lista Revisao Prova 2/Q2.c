#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int a1[10];
    int c0unt = 0;
    int j;
    
    int *a2;
    a2 = (int*)malloc(c0unt * (sizeof(int)));
    
    if (a2 == NULL) {
        printf("Error in memory alocation.\n");
        exit(1);
    }

    for (int i = 0; i < 10; i++) {
        printf("Insert the element of the array: ");
        scanf("%d", &a1[i]);
        if (a1[i] % 2 == 0){
            c0unt += 1;
            a2[j] = a1[i];
            j++;
        }
    }
    
    for (int i = 0; i < c0unt; i++){
        printf("%d ",a2[i]);
    }
    return 0;
}
