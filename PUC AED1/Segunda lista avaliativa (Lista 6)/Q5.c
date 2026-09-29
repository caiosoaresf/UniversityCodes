#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void CalculatePower(int n, int *square, int *cube){
    *square = (n*n);
    printf("The square is %d\n", *square);
    *cube = (n*n*n);
    printf("The cube is %d", *cube);
    
    return;
}

int main (){

	int num, sq, cu;
	printf("Insert the value of n: ");
	scanf("%d", &num);
	CalculatePower(num, &sq, &cu);
}
