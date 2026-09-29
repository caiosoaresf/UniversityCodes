#include <stdio.h>
#include <stdlib.h>

int main(){

int n1;
int n2;
int n3;
float media;

printf("Insert the value of the three numbers: ");
scanf("%d", &n1);
scanf("%d", &n2);
scanf("%d", &n3);

if((n1 > n2)&&(n1 > n3)){
printf("The biggest number is: %d \n", n1);
}
else if ((n2 > n1)&&(n2 > n3)){
printf("The biggest number is: %d \n", n2);
}
else if ((n3 > n1)&&(n3 > n2)){
printf("The biggest number is: %d \n", n3);
}
else if ((n1 == n2)&&(n2 > n3)){
printf("The biggest numbers are %d and %d \n", n1, n2);
}
else if ((n1 == n3)&&(n3 > n2)){
printf("The biggest numbers are %d and %d \n", n1, n3);
}
else if ((n2 == n3)&&(n2 > n1)){
printf("The biggest numbers are %d and %d \n", n2, n3);
}
else {
printf("All number are equal and: %d \n", n1);
}
}