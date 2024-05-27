/*
Program Description: Biographical information
Author: Nikita Aksenov
Date: 19/03/24
*/
#include <stdio.h>
#include <string.h>
#define SIZE 50

struct date {
    int day;
    int month;
    int year;
};

struct biographical_info {
    char firstName[SIZE];
    char surname[SIZE];
    struct date DOB;
    int height;
    int weight;
    char eyeColour[SIZE];
    char citizenship[SIZE];
};

void enterData();
void displayData();

int main()
{
    struct biographical_info person1;
    struct biographical_info person2;


    printf("Enter first name:\n");
    fgets(person1.firstName, SIZE - 1, stdin);
    person1.firstName[strlen(person1.firstName) - 1] = '\0';

    printf("Enter surname:\n");
    fgets(person1.surname, SIZE - 1, stdin);
    person1.surname[strlen(person1.surname) - 1] = '\0';

    printf("Enter day of birth:\n");
    scanf("%d", &person1.DOB.day);

    printf("Enter month of birth:\n");
    scanf("%d", &person1.DOB.month);

    printf("Enter year of birth:\n");
    scanf("%d", &person1.DOB.year);

    printf("Enter height:\n");
    scanf("%d", &person1.height);

    printf("Enter weight:\n");
    scanf("%d", &person1.weight);

    printf("Enter eye colour:\n");
    while(getchar() != '\n');
    fgets(person1.eyeColour, SIZE - 1, stdin);
    person1.eyeColour[strlen(person1.eyeColour) - 1] = '\0';

    printf("Enter citizenship:\n");
    fgets(person1.citizenship, SIZE - 1, stdin);
    person1.citizenship[strlen(person1.citizenship) - 1] = '\0';


    printf("First name: %s\n", person1.firstName);
    printf("Surname: %s\n", person1.surname);
    printf("Date of birth: %d/%d/%d\n", person1.DOB.day, person1.DOB.month, person1.DOB.year);
    printf("Height: %d\n", person1.height);
    printf("Weight: %d\n", person1.weight);
    printf("Eye colour: %s\n", person1.eyeColour);
    printf("Citizenship: %s\n", person1.citizenship);

    person2 = person1;

    person2.DOB.day = 1;
    person2.DOB.month = 1;
    person2.DOB.year = 1900;

    strcpy(person2.firstName, "Ian");
    strcpy(person2.surname, "Miller");

    printf("\nFirst name: %s\n", person2.firstName);
    printf("Surname: %s\n", person2.surname);
    printf("Date of birth: %d/%d/%d\n", person2.DOB.day, person2.DOB.month, person2.DOB.year);
    printf("Height: %d\n", person2.height);
    printf("Weight: %d\n", person2.weight);
    printf("Eye colour: %s\n", person2.eyeColour);
    printf("Citizenship: %s\n", person2.citizenship);


    return 0;
}   
