#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char company[50];
    char area[30];
    float CurrentValue;
    float PreviousValue;
    double percentage;
} Stock ;

void main()
{
    Stock s;
    printf("Insert the company name: ");
    scanf("%[^\n]", s.company);
    getchar();
    printf("Insert the area: ");
    scanf("%[^\n]", s.area);
    getchar();
    printf("Insert the current value: ");
    scanf("%f", &s.CurrentValue);
    printf("Insert the previous value: ");
    scanf("%f", &s.PreviousValue);
    s.percentage = (s.CurrentValue - s.PreviousValue)/s.PreviousValue;
    
    printf("The company name is: %s, the area is: %s, and the variation percentage is: %lf", s.company, s.area, s.percentage);
}
