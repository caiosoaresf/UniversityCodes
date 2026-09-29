#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    char genre[30];
    int members;
    int rank;
} Band;

void BandCheck(Band b[5]){
    char n4me[50];
    printf("\nInsert the name of the band you would like to check: ");
    scanf("%[^\n]", n4me);
    getchar();
    for (int i = 0; i < 5; i++){
        if (strcmp(n4me, b[i].name) == 0){
            printf("Your band is in the list");
            return;
        }
    }
    printf("Band not found");
}

void main() {
    Band b[5];

    for (int i = 0; i < 5; i++){
        printf("Band %d:\n", i+1);
        printf("Name: ");
        scanf("%[^\n]", b[i].name);
        getchar();
        printf("Genre: ");
        scanf("%[^\n]", b[i].genre);
        getchar();
        printf("Number of members: ");
        scanf("%d", &b[i].members);
        getchar();
        printf("Position in ranking: ");
        scanf("%d", &b[i].rank);
        getchar();
    }

    printf("List of bands:\n");
    for (int i = 0; i < 5; i++) {
        printf("Band %d: , whose name is: %s, genre is %s, number os members is: %d, and position in ranking is %d\n", i+1, b[i].name, b[i].genre, b[i].members, b[i].rank);
    }
    BandCheck(b);
}
