#include <stdio.h>
#include <stdlib.h>

int sum_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int S, A, B;
    scanf("%d", &S);
    scanf("%d", &A);
    scanf("%d", &B);
    
    int min_num = -1;
    int max_num = -1;
    
    for (int num = A; num <= B; num++) {
        if (sum_digits(num) == S) {
            if (min_num == -1 || num < min_num) {
                min_num = num;
            }
            if (max_num == -1 || num > max_num) {
                max_num = num;
            }
        }
    }
    
    printf("%d\n%d\n", min_num, max_num);
    
    return 0;
}