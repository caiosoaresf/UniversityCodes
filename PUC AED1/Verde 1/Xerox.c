#include <stdio.h>
#include <stdlib.h>

int main() {
    int copies;
    float value;
    
    while(1) {
        scanf("%d", &copies);
        
        if(copies < 0) {
            break;
        }
        
        if(copies == 0) {
            value = 0.00;
        }
        else if(copies <= 100) {
            value = copies * 0.25;
        }
        else {
            value = copies * 0.20;
        }
        
        printf("%.2f\n", value);
    }
    
    return 0;
}
