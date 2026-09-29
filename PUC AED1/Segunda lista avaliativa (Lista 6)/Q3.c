#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){

	int n1;
	int n2;
	int i;
	int num;
	int count;
	int prime = 0;
			
	printf("Insert the starting number: ");
	scanf("%d", &n1);
	printf("Insert the last number: ");
	scanf("%d", &n2);
	
	for(num = n1; num <= n2; num++){
		count = 0;
		
		for (i = 2; i <= num/2; i++) {
			if (num % i == 0) {
				count++;
				break;
				}
			}
		if (count == 0){
			printf("%d\n", num);
			prime ++;
		}
	}
	if (prime == 0){
	    printf("There aren't prime numbers in this sequence");
	}
}
