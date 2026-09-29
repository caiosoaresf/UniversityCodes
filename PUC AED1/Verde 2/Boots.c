#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 61

int main() {
    int N;
    scanf("%d", &N);
    
    int left[MAX_SIZE] = {0}; 
    int right[MAX_SIZE] = {0};
    
    for (int i = 0; i < N; i++) {
        int M;
        char L;
        scanf("%d %c", &M, &L);
        
        if (L == 'E') {
            left[M]++;
        } else if (L == 'D') {
            right[M]++;
        }
    }
    
    int pairs = 0;
    for (int size = 30; size <= 60; size++) {
        pairs += (left[size] < right[size]) ? left[size] : right[size];
    }
    
    printf("%d\n", pairs);
    
    return 0;
}