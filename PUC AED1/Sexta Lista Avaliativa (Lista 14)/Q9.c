#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char name[50];
    int age;
    char sex;
    char CPF[14];
    Date birth;
    int sector;
    char role[30];
    float salary;
} Company;

void main() {
    Company c;
        
    printf("Insert the name: ");
    scanf("%[^\n]", c.name);
    getchar();
    
    printf("Insert the age: ");
    scanf("%d", &c.age);
    getchar();
    
    printf("Insert the sex (M/F/Other): ");
    scanf("%c", &c.sex);
    getchar();
    
    printf("Insert the CPF with '.' and '-' : ");
    scanf("%[^\n]", c.CPF);
    getchar();

    printf("Date of birth (DD MM AAAA): ");
    scanf("%d %d %d", &c.birth.day, &c.birth.month, &c.birth.year);
    getchar();
    
    printf("Insert the sector (Between 0 and 99): ");
    scanf("%d", &c.sector);
    while (c.sector < 0 || c.sector > 99){
        printf("Incorrect Sector, insert again: ");
        scanf("%d", &c.sector);
    } 
    printf("Correct Sector\n");
    getchar();
    
    printf("Insert the role: ");
    scanf("%[^\n]", c.role);
    getchar();
    
    printf("Insert the salary: ");
    scanf("%f", &c.salary);
    getchar();

    printf("Name: %s\nAge: %d\nSex: %c\nCPF: %s\nDate of birth: %02d/%02d/%d\nSector: %d\nRole: %s\nSalary: %.2f",
    c.name, c.age, c.sex, c.CPF, c.birth.day, c.birth.month, c.birth.year, c.sector, c.role, c.salary);
}
