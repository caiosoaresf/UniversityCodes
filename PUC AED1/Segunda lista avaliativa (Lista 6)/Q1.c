#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float resultado;
    int sum = 0;
    int i = 0;
    
    while (n != 0){
        printf("Insert the values of the average mean (press 0 to end): ");
        scanf("%d", &n);
        sum += n;
        i++;
    }
    if (sum == 0){
        printf("programa encerrado");
    } else {
        resultado = (float)sum/(i-1);
        printf("The result is %f", resultado);
    }
    return 0;
}
