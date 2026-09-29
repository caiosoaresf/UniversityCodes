#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int bigger(int num1, int num2){
    if (num1 == num2){
        printf("They are equal");
    } else if (num1 > num2){
        printf("%d is the biggest number", num1);
    } else {
        printf("%d is the biggest number", num2);
    }
    return 0;
}
int main()
{
    int n1;
    int n2;
    printf("Insert the first number: ");
    scanf("%d", &n1);
    printf("Insert the second number: ");
    scanf("%d", &n2);
    bigger(n1,n2);
    
    return 0;
}
