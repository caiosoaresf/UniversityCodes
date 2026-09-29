#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    
    printf("Insert the last value of the pyramid: ");
    scanf("%d", &n);
    
    while (n != 0){
        for (int i = 1; i <= n; i++){
            printf("%d",i);
        }
        n--;
        printf("\n");
    } 
    return 0;
}
