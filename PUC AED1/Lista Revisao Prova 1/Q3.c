#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int somadiv(int num){
    int contador = 0;
    for (int i = 1; i <= num; i++){
        if (num % i == 0){
            contador += i;
        }
    }
    printf("%d", contador);
    return contador;
}

int main(){
    int n;
    printf("Insert the number: ");
    scanf("%d", &n);
    somadiv(n);
    return 0;
}
