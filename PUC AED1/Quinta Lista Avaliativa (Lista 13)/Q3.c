#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *archive;
    char phrase[200];

    archive = fopen("frases.txt", "w");
    
    if (archive == NULL) {
        printf("Error \n");
        return 1;
    }

    while (1) {
        printf("Insert the phrase ('FIM' to finish): ");
        fgets(phrase, 200, stdin);
        phrase[strcspn(phrase, "\n")] = '\0';
        
        if (strcmp(phrase, "FIM") == 0) {
            return 0;
        }
        
        fprintf(archive, "%s\n", phrase);
    }

    fclose(archive);
    return 0;
}
