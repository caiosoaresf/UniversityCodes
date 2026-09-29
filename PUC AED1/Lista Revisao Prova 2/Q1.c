#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int v1[20];
    srand(time(NULL));

    for (int i = 0; i < 20; i++) {
        int n;
        do {
            n = rand() % 100 + 1;
            int rep = 0;
            for (int j = 0; j < i; j++) {
                if (v1[j] == n) {
                    rep = 1;
                    break;
                }
            }
            if (n != rep) {
                v1[i] = n;
                break;
            }
        } while (1);
    }

    for (int i = 0; i < 20; i++) {
        printf("%d ", v1[i]);
    }
}
