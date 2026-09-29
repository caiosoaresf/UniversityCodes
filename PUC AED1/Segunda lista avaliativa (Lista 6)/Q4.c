#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){

	int v1;
	int v2;
	int option;
	
	while(1){
	    printf("\n Choose one of the options: \n 1 - Sum the numbers \n 2 - Subtract the number \n 3 - Multiply the numbers \n 4 - Divide the numbers \n 5 - Leave \n");    
	    scanf("%d", &option);
	    switch (option){
	        case 1:
    	        printf("Insert the first number: ");
    	        scanf("%d", &v1);
    	        printf("Insert the second number: ");
    	        scanf("%d", &v2);
    	        printf("The sum is %d", v1+v2);
    	        break;
	        
	        case 2:
    	        printf("Insert the first number: ");
    	        scanf("%d", &v1);
    	        printf("Insert the second number: ");
    	        scanf("%d", &v2);
    	        printf("The sum is %d", v1-v2);
    	        break;
	        
	        case 3:
    	        printf("Insert the first number: ");
    	        scanf("%d", &v1);
    	        printf("Insert the second number: ");
    	        scanf("%d", &v2);
    	        printf("The sum is %d", v1*v2);
    	        break;
	        
	        case 4:
	            printf("Insert the first number: ");
	            scanf("%d", &v1);
	            printf("Insert the second number: ");
	            scanf("%d", &v2);
    	        if (v2 == 0){
    	            printf("Invalid denominator");
    	            break;
    	        } else {
    	            printf("The sum is %d", v1+v2);
    	            break;
    	        }
	       case 5:
	            printf("Exited the program")
	            return 0;
	       
	       default:
	            printf("Invalid option");
	            break;
	    }
	}
}
