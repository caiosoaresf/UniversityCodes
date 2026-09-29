#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int day;
    int month;
    int year;
} Data;

typedef struct {
    char model[20];
    char brand[50];
    int yearfab;
    float price;
    Data sellDate;
} Car;

void PriciestCar(Car cars[], int size) {
    int priciestIndex = 0;
    float highestPrice = cars[0].price;
    
    for(int i = 1; i < size; i++) {
        if(cars[i].price > highestPrice) {
            highestPrice = cars[i].price;
            priciestIndex = i;
        }
    }
    
    printf("\nThe priciest car is:\n");
    printf("Model: %s\n", cars[priciestIndex].model);
    printf("Brand: %s\n", cars[priciestIndex].brand);
    printf("Price: %.2f\n", cars[priciestIndex].price);
    printf("Sell Date: %d/%d/%d\n", 
           cars[priciestIndex].sellDate.day,
           cars[priciestIndex].sellDate.month,
           cars[priciestIndex].sellDate.year);
}

int main() {
    int j;
    int i = 0;
    
    printf("Insert the number of cars: ");
    scanf("%d", &j);
    while(getchar() != '\n');
    
    Car c[j];
    
    while(i < j) {
        printf("\nCar %d\n", i+1);
        
        printf("Insert the car model: ");
        scanf("%[^\n]", c[i].model);
        while (getchar() != '\n');
        
        printf("Insert the car brand: ");
        scanf("%[^\n]", c[i].brand);
        while (getchar() != '\n');
        
        printf("Insert the year of fabrication: ");
        scanf("%d", &c[i].yearfab);
        while(getchar() != '\n');
        
        printf("Insert the price: ");
        scanf("%f", &c[i].price);
        while(getchar() != '\n');
        
        printf("Insert the date (day month year): ");
        scanf("%d %d %d", &c[i].sellDate.day, &c[i].sellDate.month, &c[i].sellDate.year);
        while(getchar() != '\n');
        
        i++;
    }
    
    PriciestCar(c, j);
    return 0;
}
