#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* ReverseString(char* arr, int size) {
    char* result = (char*)malloc((size + 1) * sizeof(char));
    for (int i = 0; i < size; i++) {
        result[i] = arr[size - i - 1];
    }
    return result;
}

void main() {
    char word[100];
   
    printf("Insert the word: ");
    fgets(word, 100, stdin);
    
    int length = strlen(word);
    char* reversed = ReverseString(word, length);
    
    printf("%s", reversed);
    
    free(reversed);
}
