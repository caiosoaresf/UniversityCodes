#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

void exchange(int *num1, int *num2){
    int aux = *num1;
    *num1 = *num2;
    *num2 = aux;
    
    printf("The new values are %d and %d", *num1, *num2);
    
    return;
}
int main()
{
    int n1;
    int n2;
    
    printf("Insert the fisrt value: ");
    scanf("%d", &n1);
    printf("Insert the fisrt value: ");
    scanf("%d", &n2);
    
    exchange(&n1,&n2);
    
    return 0;
}
