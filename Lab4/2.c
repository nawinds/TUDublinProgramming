/*
Program Description: Checking whether number is even or odd
Author: Nikita Aksenov
Date: 17/10/2023
*/
#include <stdio.h>

int main()
{
    short number;  // initializing number variable


    printf("Enter an integer between 1 and 100: ");
    scanf("%d", &number);  // scanning number from the keyboard

    if (number > 100 || number < 1)  // checking if the entered number is valid
    {
        printf("Entered number is outside of the range 1 to 100");
        return 1;
    }

    if (number % 2 == 0)  // checking whether number is even
    {
        printf("Number %d is Even", number);
    }
    else  // if number is odd
    {
        printf("Number %d is Odd", number);
    }

    return 0;
}