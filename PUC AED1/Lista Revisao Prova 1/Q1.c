#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
    int n;
    printf("Insert the number of multiples: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++){
        printf("%d\n", i * 3);
    }
    
    return 0;
}
