#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){
	
	int n;
	long int fib[800];
	fib[0] = 0;
	fib[1] = 1;
	fib[2] = 1;
	
	for(int i = 3; i < 801; i++){
		int i1 = i - 1;
		int i2 = i - 2;	
		fib[i] = fib[(i1)] + fib[(i2)];
	}
	
		do {
		printf("Insert the position of the fibbonaci array you want to check: ");
		scanf("%d", &n);
		if ((n < 800) && (n > 0)) {
			printf("The value at this position is: %ld \n", fib[n]);
		}
		else{
			return 0;
		} 
	}while (1);
}
