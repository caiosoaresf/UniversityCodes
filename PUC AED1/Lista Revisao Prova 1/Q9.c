#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int divisible(int num, int total){
    if ((num % 4 == 0)&&(num % 6 == 0)){
        total++;
    }
    return total;
}
int main()
{
    int n;
    int quantity = 0;
    while (n != -1){
        printf("Insert the number: ");
        scanf("%d", &n);
        quantity = divisible(n, quantity);
    }
    printf("%d", quantity);
    
    return 0;
}
