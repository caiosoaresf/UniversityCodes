#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void Make_arr4y(int ar[100]){
    int num = 0;
    for(int cont = 0; cont <100; cont++){
        if ((num%6 != 0)&&(num%10 != 6)){
            printf("%d\n", num);
        }
        num++;
    }
    return;
} 

int main() {
    int arr4y[100];
    Make_arr4y(arr4y);
    return 0;
}
