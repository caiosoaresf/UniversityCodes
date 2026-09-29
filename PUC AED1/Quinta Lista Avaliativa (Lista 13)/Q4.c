#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *Archive;
    char line[200];
    int count = 0;

    Archive = fopen("frases.txt", "r");
    
    if (Archive == NULL) {
        printf("Error\n");
        return 1;
    }

    while (fgets(line, 200, Archive) != NULL) {
        count++;
    }

    fclose(Archive);

    printf("Number of lines is: %d\n", count);
    return 0;
}
