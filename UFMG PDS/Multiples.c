#include <stdio.h>

int main() {
		
	int n;
	printf("Insert the desired number: ");
	scanf("%d", &n);
	
	int i = 0;
	int m2,m3,m5 = 0;
	int n2;
	
	n2 = n;
	
	do {
		if ((n2 % 2) == 0){
			m2 += 1;
		}
		if ((n2 % 3) == 0){
			m3 +=1;
			}
		if ((n2 % 5) == 0){
			m5 +=1;
			}
		n2 = n2 - 1;
		i += 1;	
	} while (i != n);
	
	printf("The multiples of 2 are: %d \n", m2);
	printf("The multiples of 3 are: %d \n", m3);
	printf("The multiples of 5 are: %d \n", m5);
	
}	
