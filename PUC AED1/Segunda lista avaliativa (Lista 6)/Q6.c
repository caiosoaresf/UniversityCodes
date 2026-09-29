#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void PosNegs(int n, int *positives, int *negatives){
    if (n > 0){
        (*positives)++;
    } else if (n < 0) {
        (*negatives)++;
    }
    return;
}

int main (){

	int num;
	int pos = 0; 
	int neg = 0;
	
	while (num != 0){
	    printf("Insert the value of n: ");
	    scanf("%d", &num);
	    PosNegs(num, &pos, &neg);
	}
	
	printf("Positives: %d\n", pos);
	printf("Negatives: %d", neg);
}
