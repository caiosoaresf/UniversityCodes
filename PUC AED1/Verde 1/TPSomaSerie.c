#include <stdio.h>

int main() {
    int n;
    double S = 0.0;
    
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        S += (2.0 * i - 1) / i;
    }
    
    printf("%.2lf\n", S);
    
    return 0;
}
