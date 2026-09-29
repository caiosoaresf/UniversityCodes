#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
  int v1[10];
  int v2[10];
  int n;
  
  for(int i = 0; i < 10; i++){
    printf("Insert a number to the array: ");
    scanf("%d", &n);
    v1[i] = n;
    }
  for(int i = 0; i < 10; i++){
    int i2 = 9 - i;
    v2[i] = v1[i2];
    printf("%d\n", v2[i]);
    }
}  
