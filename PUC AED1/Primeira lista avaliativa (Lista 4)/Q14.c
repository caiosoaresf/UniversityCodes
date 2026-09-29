#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float result = 0.0;
    int n;

    printf("Insert the value of the denominator you want to reach: ");
    scanf("%d", &n);

    for (float i = 1.0 ; i <= n; i++) {
        result += 1.0/i;
    };

    printf("%f", result);
    return 0;
}
