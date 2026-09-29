#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

void main() {
    int linhas = 3;
    int colunas = 3;
    srand(time(NULL));
    
    int **matriz = (int**)malloc(linhas * sizeof(int));
    if (matriz == NULL){
        printf("Alloc error");
        exit(1);
    }
    for(int i = 0; i < linhas; i++){
        matriz[i] = (int*)malloc(colunas * sizeof(int));
        if (matriz == NULL){
            printf("Alloc error");
            exit(1);
        }
    }
    
    
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            matriz[i][j] = rand()%50 + 1;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    free(matriz);
}
