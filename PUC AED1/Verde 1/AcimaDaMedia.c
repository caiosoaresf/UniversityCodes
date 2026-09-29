#include <stdio.h>

int main() {
    int C, N, i, j;
    int grades[1000];
    double mean, over;
    
    scanf("%d", &C);
    
    for (i = 0; i < C; i++) {
        scanf("%d", &N);
        
        int sum = 0;
        for (j = 0; j < N; j++) {
            scanf("%d", &grades[j]);
            sum += grades[j];
        }
        
        mean = (double)sum / N;
        
        over = 0;
        for (j = 0; j < N; j++) {
            if (grades[j] > mean) {
                over++;
            }
        }
        
        double percent = (over / N) * 100;
        printf("%.3lf%%\n", percent);
    }
    
    return 0;
}
