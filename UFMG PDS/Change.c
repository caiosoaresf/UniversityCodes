#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	int change = 0;
	int bill_1 = 0;
	int bill_2 = 0;
	int bill_5 = 0;
	int bill_10 = 0;
	int bill_20 = 0;
	int bill_50 = 0;
	int bill_100 = 0;

	
	printf("Insert the value you are paying(integer): ");
	scanf("%d", &num);
	
		if (num >= 100){
			bill_100 = num/100;
			change = num%100;
			}
		if ((change<100) && (change>=50)) {
			bill_50 = change/50;
			change = change%50;
			}
		if ((change<50) && (change>=20)) {
			bill_20 = change/20;
			change = change%20;
			}
		if ((change<20) && (change>=10)) {
			bill_10 = change/10;
			change = change%10;
			}
		if ((change<10) && (change>=5)) {
			bill_5 = change/5;
			change = change%5;
			}
		if ((change<5) && (change>=2)) {
			bill_2 = change/2;
			change = change%2;
			}
		if (change >= 1){
			bill_1 = change/1;
			}
	
	printf("The number of 100$ bill_s is: %d \n", bill_100);
	printf("The number of 50$ bill_s is: %d \n", bill_50);
	printf("The number of 20$ bill_s is: %d \n", bill_20);
	printf("The number of 10$ bill_s is: %d \n", bill_10);
	printf("The number of 5$ bill_s is: %d \n", bill_5);
	printf("The number of 2$ bill_s is: %d \n", bill_2);
	printf("The number of 1$ bill_s is: %d \n", bill_1);
}

