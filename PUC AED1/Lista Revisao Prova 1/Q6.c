#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

float summation(float num, float sum){
    for (float i = 1.0; i <= num; i++){
        sum += 1.0/i;
    }
    
    return sum;
}
int main()
{
    float n;
    float soma = 0.0;
    printf("Insert the final number: ");
    scanf("%f", &n);
    float result = summation(n,soma);
    printf("%f", result);
    
    return 0;
}
