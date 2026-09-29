#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float x, y;
    
    do {
        printf("Insert the value of x: ");
        scanf("%f", &x);
    
        printf("Insert the value of y: ");
        scanf("%f", &y);
        
        if ((x > 0) && (y > 0)){
            printf("First Quadrant \n");
        } else if ((x < 0) && (y > 0)) {
            printf("Second Quadrant \n");
        } else if ((x < 0) && (y < 0)) {
            printf("Third Quadrant \n");
        } else if ((x > 0) && (y < 0)) {
            printf ("Fourth Quadrant \n");
        }
        
    } while ((x != 0) && (y !=0 ));
    
    return 0;
}
