#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int result, n;

    printf("Insert the position of the Fibonacci you want to check: ");
    scanf("%d", &n);

    if (n == 1) {
        result = 1;
    } else if (n == 2) {
        result = 1;
    } else {
        
        int v1 = 1;
        int v2 = 1;

        for (int i = 3; i <= n; i++) {
            result = v1 + v2;
            v1 = v2;
            v2 = result;
        };
    }

    printf("%d", result);
    return 0;
}
