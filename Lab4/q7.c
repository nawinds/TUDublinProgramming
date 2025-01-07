/*
Program Description: Displaying a weekday by its number
Author: Nikita Aksenov
Date: 17/10/2023
*/
#include <stdio.h>

int main()
{
    int weekday = 8; // initializing a variable for the weekday


    printf("Enter the weekday number: ");
    scanf("%d", &weekday);  // scanning weekday number from the keyboard

    switch (weekday)
    {
        case 1:
        {
            printf("Sunday");
            break;
        }

        case 2:
        {
            printf("Monday");
            break;
        }

        case 3:
        {
            printf("Tuesday");
            break;
        }

        case 4:
        {
            printf("Wednesday");
            break;
        }

        case 5:
        {
            printf("Thursday");
            break;
        }

        case 6:
        {
            printf("Friday");
            break;
        }

        case 7:
        {
            printf("Saturday");
            break;
        }

        default:
        {
            printf("The weekday number you entered is invalid");
            break;
        }
    }

    return 0;
}