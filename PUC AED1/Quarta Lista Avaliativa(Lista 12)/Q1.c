#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *arr4y;
    srand(time(NULL));
    arr4y = (int*)malloc(1000*(sizeof(int)));
    
    if (arr4y == NULL) {
        printf("Error in memory alocation.\n");
        exit(1);
    }
        
    for (int i = 0; i < 1000; i++){
        arr4y[i] = rand() %10 + 1;
        printf("%d\n", arr4y[i]);
    }
    
    free(arr4y);
    return 0;
}
