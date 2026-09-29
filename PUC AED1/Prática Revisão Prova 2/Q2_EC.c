#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int CountVowel(char *arr4y) {
    if (*arr4y == '\0') {
        return 0;
    }
    char currentChar = tolower(*arr4y);
    if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || 
        currentChar == 'o' || currentChar == 'u') {
        return 1 + CountVowel(arr4y + 1);
    } else {
        return CountVowel(arr4y + 1);
    }
}

int main() {
    char word[100];
    int c0unt;
   
    printf("Insert the word: ");
    fgets(word, sizeof(word), stdin);
    c0unt = CountVowel(word);
   
    printf("The word has %d vowels", c0unt);
    
    return 0;
}
