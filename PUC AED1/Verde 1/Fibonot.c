#include <stdio.h>
#define MAX 105

int main() {
    int n, fibonot_pos = 0;
    int fibonacci[MAX] = {0};
    int a = 1, b = 1;

    printf("Insert the Fibonot position you want to find: ");
    scanf("%d", &n);

    if ((n < 1) || (n > MAX)) {
        printf("Invalid number\n");
        return 0;
    }

    int index = 0;
    fibonacci[index++] = a;
    fibonacci[index++] = b; 
    while (1) {
        int next_fib = a + b;
        if (next_fib > MAX) break;
        fibonacci[index++] = next_fib;
        a = b;
        b = next_fib;
    }

    for (int num = 1; ; num++) { 
        int is_fibonacci = 0;


        for (int i = 0; i < index; i++) {
            if (fibonacci[i] == num) {
                is_fibonacci = 1;
                break;
            }
        }

        if (!is_fibonacci) {
            fibonot_pos++;
            if (fibonot_pos == n) {
                printf("Fibonot at position %d is: %d\n", n, num);
                break;
            }
        }
    }

    return 0;
}
