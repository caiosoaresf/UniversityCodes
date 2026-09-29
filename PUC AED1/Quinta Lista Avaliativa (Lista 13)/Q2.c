#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *archive;
    char line[100];

    archive = fopen("dados.txt", "r");
    
    if (archive == NULL) {
        printf("Error\n");
        return 1;
    }

    while (fgets(line, 100, archive) != NULL) {
        printf("%s", line);
    }

    fclose(archive);
    return 0;
}
