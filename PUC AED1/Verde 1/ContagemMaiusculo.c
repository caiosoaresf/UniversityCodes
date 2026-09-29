#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_uppercases(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (isupper(*str)) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char line[1000];
    
    while (1) {
        fgets(line, sizeof(line), stdin);
        
        line[strcspn(line, "\n")] = '\0';
        
        if (strcmp(line, "FIM") == 0) {
            break;
        }
        
        printf("%d\n", count_uppercases(line));
    }
    
    return 0;
}