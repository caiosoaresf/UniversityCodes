#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int Fibo(int res, int num){
    if (num == 1) {
        res = 1;
    } else if (num == 2) {
        res = 1;
    } else {
        
        int v1 = 1;
        int v2 = 1;
        int isFibo;

        for (int i = 3; i <= num; i++) {
            res = v1 + v2;
            v1 = v2;
            v2 = res;
            if (num == res){
                printf("This number belongs to fibbonaci");
                isFibo = 1;
            }
        }
        if (isFibo != 1){
            printf("This number doesn't belong to fibbonaci");
        }
        
    }
    return 0;
}
int main() {
    
    int result, n;
    printf("Insert the position of the Fibonacci you want to check: ");
    scanf("%d", &n);
    Fibo(result, n);
    
    return 0;
}
