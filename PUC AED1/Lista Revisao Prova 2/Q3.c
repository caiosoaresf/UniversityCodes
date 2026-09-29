#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int CountVowel(char *arr4y){
    if (*arr4y == '\0'){
        return 0;
    }
    *arr4y = tolower(*arr4y);
    if (*arr4y == 'a'||*arr4y == 'e'||*arr4y == 'i'||*arr4y == 'o'||*arr4y == 'u'){
        return 1 + CountVowel(arr4y + 1);
    } else {
        return CountVowel(arr4y + 1);
    }
}

void main()
{
    char word[50];
    int c0unt;
   
    printf("Insert the word: ");
    fgets(word, 50, stdin);
    c0unt = CountVowel(word);
   
    printf("The word has %d vowels", c0unt);
}
