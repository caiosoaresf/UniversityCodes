#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int small = 0, medium = 0;
    for (int i = 0; i < N; i++) {
        int size;
        scanf("%d", &size);
        if (size == 1) small++;
        else medium++;
    }
    
    int P, M;
    scanf("%d %d", &P, &M);
    
    if (small <= P && medium <= M) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    
    return 0;
}