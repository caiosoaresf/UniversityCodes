#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int v1, v2, i = 0;
    
    printf("Insert the first value of the sequence: ");
    scanf("%d", &v1);
    
    printf("Insert the second value of the sequence: ");
    scanf("%d", &v2);
    
    i = v1;
    
    do {
        if (i % 5 == 0){
            printf("%d\n", i);
        }
        i++;
    } while (i <= v2);

    return 0;
}
