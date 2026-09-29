#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float v1;
    
    printf("Insert your score: ");
    scanf("%f", &v1);
    
    while (1) {
        
        if ((v1 < 0)||(v1 > 10)) {
            printf("Invalid score, insert again: ");
            scanf("%f", &v1);
        } else {
            printf("Score saved: %.1f", v1);
            return 0;
        }
    }
    return 0;
}
