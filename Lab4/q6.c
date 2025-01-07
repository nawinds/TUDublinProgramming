/*
Program Description: Displaying single entered numeral as a word
Author: Nikita Aksenov
Date: 17/10/2023
*/
#include <stdio.h>

int main()
{
    int numeral = 10; // initializing a variable for the numeral


    printf("Enter the numeral: ");
    scanf("%d", &numeral);  // scanning numeral from the keyboard

    switch (numeral)
    {
        case 0:
        {
            printf("Zero");
            break;
        }

        case 1:
        {
            printf("One");
            break;
        }

        case 2:
        {
            printf("Two");
            break;
        }

        case 3:
        {
            printf("Three");
            break;
        }

        case 4:
        {
            printf("Four");
            break;
        }

        case 5:
        {
            printf("Five");
            break;
        }

        case 6:
        {
            printf("Six");
            break;
        }

        case 7:
        {
            printf("Seven");
            break;
        }

        case 8:
        {
            printf("Eight");
            break;
        }

        case 9:
        {
            printf("Nine");
            break;
        }

        default:
        {
            printf("The numeral you entered is invalid");
            break;
        }
    }

    return 0;
}