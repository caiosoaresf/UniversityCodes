#include <stdio.h>

int main() {
	int n;
	int i;
	int soma;
	int n2;
	
	printf("Insert the desired number: ");
	scanf("%d", &n);
	
	n2 = n;
	
	for(i = 0; i != n; i++){
		soma += n2;
		n2 = n2 - 1;
		}
		
	printf("The sum os the numbers is: %d", soma);
	
	}
