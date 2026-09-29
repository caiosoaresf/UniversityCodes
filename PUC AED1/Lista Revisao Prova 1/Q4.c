#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

void pairs(int num, int *even){
    if (num % 2 == 0){
        (*even)++;
    }
    return;
}
int main()
{
    int n;
    int pair = 0;
    while (n != 0){
        printf("Insert the number: ");
        scanf("%d", &n);
        pairs(n, &pair);
    }
    printf("%d", pair-1);
    
    return 0;
}
