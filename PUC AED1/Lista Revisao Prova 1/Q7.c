#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int power(int bs, int ep){
    if (ep == 0){
        return 1;
    } else {
        return bs * power(bs, ep - 1);
    }
}
int main()
{
    int base;
    int exponent;
    int result;
    
    printf("Insert the base: ");
    scanf("%d", &base);
    printf("Insert the base: ");
    scanf("%d", &exponent);
    
    result = power(base, exponent);
    printf("%d", result);
    
    return 0;
}
