#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *archive;
    char name[50];
    int age;
    int i;

    archive = fopen("dados.txt", "w");
    
    if (archive == NULL) {
        printf("Error!\n");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        printf("Insert the name of the person %d (Ex: Paul 22): ", i + 1);
        scanf("%49s %d", name, &age); 
        fprintf(archive, "%s %d\n", name, age);
    }

    fclose(archive);
    return 0;
}
