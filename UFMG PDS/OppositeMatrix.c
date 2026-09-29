#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	int q1;
	int q2;
	int n;
	int m = 0;
	
	printf("Insert the number of lines in the Matrix: ");
	scanf("%d", &q1);
	
	printf("Insert the number of columns in the Matrix: ");
	scanf("%d", &q2);
  
	int v1[q1][q2];
	int v2[q1][q2];
	
	for (int i = 0; i < q1; i++){
		for (int j = 0; j < q2; j++){
			printf("Insert the number of this position: ");
			scanf("%d", &n);
			v1[i][j] = n;
		}
	}
	
	for (int i = 0; i < q1; i++){
		for (int j = 0; j < q2; j++){
			m = v1[i][j];
			v2[i][j] = 0 - m;
			n = v2[i][j];
			if (j == (q2 - 1)){
				printf("%d\n", n);
			}
			else{
				printf("%d", n);
				}
		}
	}	
}	
