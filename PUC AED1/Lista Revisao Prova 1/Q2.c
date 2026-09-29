#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
    int n1;
    int n2;
    printf("Insert the first value: ");
    scanf("%d", &n1);
    printf("Insert the final value: ");
    scanf("%d", &n2);
    
    for (int i = n1; i <= n2; i++){
        if (i % 2 == 1){
            printf("%d\n", i);
        }
    }
    
    return 0;
}
