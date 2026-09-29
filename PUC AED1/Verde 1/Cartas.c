#include <stdio.h>

int main() {
    int cards[5];
    int i;
    char result = 'N';
    
    for (i = 0; i < 5; i++) {
        scanf("%d", &cards[i]);
    }
    
    int crescent = 1;
    for (i = 0; i < 4; i++) {
        if (cards[i] >= cards[i+1]) {
            crescent = 0;
            break;
        }
    }
    if (crescent) {
        result = 'C';
    }
    
    int decrescent = 1;
    for (i = 0; i < 4; i++) {
        if (cards[i] <= cards[i+1]) {
            decrescent = 0;
            break;
        }
    }
    if (decrescent) {
        result = 'D';
    }
    printf("%c\n", result);
    
    return 0;
}
