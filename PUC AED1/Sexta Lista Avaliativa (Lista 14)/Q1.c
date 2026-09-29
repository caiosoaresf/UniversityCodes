#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Person;

void imprimirPessoa(Person p){
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
}

void main()
{
    Person p;
    printf("Insert the name: ");
    scanf("%s", p.name );
    printf("Insert the age: ");
    scanf("%d", &p.age);
    imprimirPessoa(p);
}
