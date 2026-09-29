#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int n;
	int result = 0;
  
	int v1[2][3];
	int v2[3][2];
	
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++){
			printf("Insert the number of this position: ");
			scanf("%d", &n);
			v1[i][j] = n;
		}
	}
	
	printf("\nOriginal Matrix:\n");
	for (int i = 0; i < 2; i++){
	    for (int j = 0; j < 3; j++){
	        printf("%d ", v1[i][j]);
	    }
	    printf("\n");
	}
	
	printf("\nTranpose Matrix:\n");
	for (int i = 0; i < 3; i++){
	    for (int j = 0; j < 2; j++){
	        v2[i][j] = v1[j][i];
	        printf("%d ", v2[i][j]);
	    }
	    printf("\n");
	}
	
	for (int i = 0; i < 2; i++){
	    for (int j = 0; j < 3; j++){
	        result += v1[i][j];
	    }
	}
	printf("\nThe sum of the elements of the matrix is: %d", result);
}
