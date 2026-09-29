#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int CountLetter(char *arr4y, char let){
    if (*arr4y == '\0'){
        return 0;
    }
    *arr4y = tolower(*arr4y);
    if (*arr4y == let){
        return 1 + CountLetter(arr4y + 1, let);
    } else {
        return CountLetter(arr4y + 1, let);
    }
}

void main()
{
    char word[50];
    char letter;
   
    printf("Insert the word: ");
    fgets(word, 50, stdin);
    
    printf("Insert the letter: ");
    scanf("%c", &letter);
    int c0unt = CountLetter(word, letter);
   
    printf("The word has %d letters %c", c0unt, letter);
}
