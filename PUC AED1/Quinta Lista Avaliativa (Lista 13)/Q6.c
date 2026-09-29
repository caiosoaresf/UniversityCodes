#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *archive;
    int writings[5];
    int readings[5];

    printf("Insert the values you want to turn into binary: ");
    for (int i = 0; i < 5; i++){
        scanf("%d", &writings[i]);
    }

    archive = fopen("data.bin", "wb");
    if (archive == NULL) {
        printf("Error!\n");
        return 1;
    }

    fwrite(writings, sizeof(int), 5, archive);
    fclose(archive);

    archive = fopen("data.bin", "rb");
    if (archive == NULL) {
        printf("Error!\n");
        return 1;
    }

    fread(readings, sizeof(int), 5, archive);
    fclose(archive);

    for (int i = 0; i < 5; i++) {
        printf("%d ", readings[i]);
    }
    printf("\n");
    return 0;
}
