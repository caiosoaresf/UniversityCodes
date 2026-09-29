#include <stdio.h>
#include <stdlib.h>

int main() {
    char archive_name[100];

    printf("Insert the name of the file you want to remove: ");
    scanf("%s", archive_name);

    if (remove(archive_name) == 0) {
        printf("File removed successfully!\n");
    } else {
        perror("Error removing file");
    }
    
  return 0;
}
