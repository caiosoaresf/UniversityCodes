#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char title[100];
    char author[50];
    int year;
} Book;

void main()
{
    Book b;
    printf("Insert the title: ");
    scanf("%[^\n]", b.title );
    getchar();
    printf("Insert the author: ");
    scanf("%[^\n]", b.author );
    getchar();
    printf("Insert the year: ");
    scanf("%d", &b.year);
    printf("The book is: %s, written by %s, published in %d", b.title, b.author, b.year);
}
