#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

void position(int l1ste[20]) { 
    int n;
    printf("Insert the number you want to check: ");
    scanf("%d", &n);
    for(int j = 0; j < 20; j++) {
        if (l1ste[j] == n) {
            printf("The number is in the position %d\n", j);
        }
        printf("%d", l1ste[j]);
    } 
}

int main() {
    int l1st[20];
    srand(time(NULL));
    for(int i = 0; i < 20; i++) {
        l1st[i] = rand() %100 + 1;
    }
    position(l1st);
    return 0;
}
