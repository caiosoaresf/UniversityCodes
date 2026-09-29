#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void Create_array(int ar[5]){
    int num;
    for (int i = 0; i < 5; i++){
        printf("Insert the values: ");
        scanf("%d", &num);
        ar[i] = num;
    }
    return;
} 

int Check_smallest(int arr[5]){
    int smallest = arr[0];
    int smallest_pos;
    for (int i = 0; i < 5; i++){
        if (arr[i] <= smallest){
            smallest_pos = i;
            smallest = arr[i];
        }
    }
    printf("The position of the smallest is: %d\n", smallest_pos);
    return smallest;
}

int Switching(int arra[5], int small){
    int aux = small;
    small = arra[0];
    arra[0] = aux;
    printf("The value of the smallest is %d and the value of the first is %d", small, arra[0]);
}

int main() {
    int arr4y[5];
    Create_array(arr4y);
    int result = Check_smallest(arr4y);
    Switching(arr4y,result);
    return 0;
}
