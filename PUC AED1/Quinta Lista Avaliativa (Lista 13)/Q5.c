#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *archive;
    char name[50];
    float score;

    archive = fopen("notas.txt", "r");
    
    if (archive == NULL) {
        printf("Error!\n");
        return 1;
    }

    while (fscanf(archive, "%s %f", name, &score) == 2) {
        printf("%s %.1f\n", name, score);
    }

    fclose(archive);
    return 0;
}
