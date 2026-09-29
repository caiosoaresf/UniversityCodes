#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} point2d;

float distance(point2d initial, point2d final) {
    float dx = final.x - initial.x;
    float dy = final.y - initial.y;
    return sqrt(dx*dx + dy*dy);
}

void main() {
    point2d InitialPoint = {0, 0};
    point2d FinalPoint = {0, 0};
    int option;
    
    while(option != 4){
        printf("Option 1. Insert the values of the initial point\n");
        printf("Option 2. Insert the values of the final point\n");
        printf("Option 3. Calculate and print the distance between two points\n");
        printf("Option 4. Leave\n");
        printf("Choose an option: ");
        scanf("%d", &option);
        
        switch(option) {
            int InitialCount;
            int FinalCount;
            case 1:
                printf("Insert initial x: ");
                scanf("%f", &InitialPoint.x);
                printf("Insert initial y: ");
                scanf("%f", &InitialPoint.y);
                InitialCount = 1;
                break;
                
            case 2:
                printf("Insert final x: ");
                scanf("%f", &FinalPoint.x);
                printf("Insert final y ");
                scanf("%f", &FinalPoint.y);
                FinalCount = 1;
                break;
                
            case 3:
                if (InitialCount == 1 && FinalCount == 1){
                    printf("Distance between point: %.2f\n", distance(InitialPoint, FinalPoint));
                    break;
                } else {
                    printf("Points were not correctly evaluated\n");
                    break;
                }
                
            case 4:
                printf("Successfully left\n");
                break;
                
            default:
                printf("invalid option!\n");
        }
    }
}
