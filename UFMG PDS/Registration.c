#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
  
  int q1;
  int q2;
  int n;
  
  printf("Insert the quantity of registers in PSD: ");
  scanf("%d", &q1);
  printf("Insert the quantity of registers in COMPSCI: ");
  scanf("%d", &q2);
  
  int v1[q1];
  int v2[q2];
  
  for(int i = 0; i < q1; i++){
    printf("Insert the registration number for PSD: ");
    scanf("%d", &n);
    v1[i] = n;
    }
 
  for(int i = 0; i < q2; i++){
    printf("Insert the registration number for COMPSCI: ");
    scanf("%d", &n);
    v2[i] = n;
    }
  
  if (q1 >= q2){
    int v3[q2];
    for(int i = 0; i < q1; i++){
      for(int j = 0; j < q2; j++){
        if(v2[j] == v1[i]){
          v3[j] = v2[j];
          printf("%d\n", v3[j]);
          }
        }
      }
    } else {
    int v3[q1];
    for(int i = 0; i < q2; i++){
      for(int j = 0; j < q1; j++){
        if(v2[i] == v1[j]){
          v3[j] = v1[j];
          printf("%d\n", v3[j]);
          }
        }
      }
    }
}  
