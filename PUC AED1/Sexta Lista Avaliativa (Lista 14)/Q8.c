#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int enrollment;
    char name[50];
    float grade1;
    float grade2;
    float grade3;
} Student;

void main() {
    int option;
    
    Student s[5];
    int count;

    printf("Insert the information about the 5 students:\n");
    for(int i = 0; i < 5; i++) {
        printf("Student %d:\n", i+1);
        printf("enrollment: ");
        scanf("%d", &s[i].enrollment);
        while(getchar() != '\n');
        
        printf("name: ");
        fgets(s[i].name, 50, stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
        
        printf("grade 1: ");
        scanf("%f", &s[i].grade1);
        while(getchar() != '\n');
        
        printf("grade 2: ");
        scanf("%f", &s[i].grade2);
        while(getchar() != '\n');
        
        printf("grade 3: ");
        scanf("%f", &s[i].grade3);
        while(getchar() != '\n');
    
        count = 1;
    }
    
    while (option != 3){
        printf("\nMENU\n");
        printf("1. Show biggest first exam score\n");
        printf("2. Calculate mean and its information\n");
        printf("3. Leave\n");
        
        printf("Choose an option: ");
        scanf("%d", &option);
        getchar();
        
        switch(option) {
                
            case 1:
                if(count != 1) {
                    printf("Data not inserted!\n");
                return;
                }
    
                int Biggest = 0;
                for(int i = 1; i < 5; i++) {
                    if(s[i].grade1 > s[Biggest].grade1) {
                        Biggest = i;
                    }
                }
                printf("\nStudent with biggest grade on first exam:\n");
                printf("enrollment: %d, name: %s, grade: %.2f\n", 
                       s[Biggest].enrollment, 
                       s[Biggest].name, 
                       s[Biggest].grade1);;
                break;
                
            case 2:
                if(count != 1) {
                    printf("Data not inserted!\n");
                return;
                }
    
                float mean[5];
                Biggest = 0;
                int Lowest = 0;
                
                for(int i = 0; i < 5; i++) {
                    mean[i] = (s[i].grade1 + s[i].grade2 + s[i].grade3) / 3;
                    
                    if(mean[i] > mean[Biggest]) Biggest = i;
                    if(mean[i] < mean[Lowest]) Lowest = i;
                }
                
                printf("Student with highest mean:\n");
                printf("enrollment: %d, name: %s, mean: %.2f\n", 
                       s[Biggest].enrollment, 
                       s[Biggest].name, 
                       mean[Biggest]);
                
                printf("\nStudent with lowest mean:\n");
                printf("enrollment: %d, name: %s, mean: %.2f\n", 
                       s[Lowest].enrollment, 
                       s[Lowest].name, 
                       mean[Lowest]);
                
                printf("Overall situation of students\n");
                for(int i = 0; i < 5; i++) {
                    printf("%s (enrollment %d): mean %.2f - %s\n", 
                           s[i].name, 
                           s[i].enrollment, 
                           mean[i], 
                           mean[i] >= 6.0 ? "Approved" : "Reproved");
                };
                break;
                
            case 3:
                printf("Leaving\n");
                break;
                
            default:
                printf("Invalid Option\n");
        }
    }
}
