#include <stdio.h>
#include <stdlib.h>

int main() {
    if (freopen("entrance.txt", "r", stdin) == NULL) {
        perror("Error!");
        return 1;
    }

    if (freopen("exit.txt", "w", stdout) == NULL) {
        perror("Error!");
        return 1;
    }

    char line[1000];
    
    while (fgets(line, 1000, stdin)) {
        printf("%s", line);
    }

    fclose(stdin);
    fclose(stdout);

    return 0;
}
