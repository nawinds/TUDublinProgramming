/*
Program Description: Checking if the first entered integer is evenly divisible by the second
Author: Nikita Aksenov
Date: 17/10/2023
*/
#include <stdio.h>

int main()
{
    int number1, number2;  // initializing variables for numbers


    printf("Enter the first integer: ");
    scanf("%d", &number1);  // scanning first integer from the keyboard

    printf("Enter the second integer: ");
    scanf("%d", &number2);  // scanning second integer from the keyboard

    if (number1 % number2 == 0)  // checking if the first entered integer is evenly divisible by the second
    {
        printf("Integer %d is evenly divisible by integer %d", number1, number2);
    }
    else  // if not evenly divisible
    {
        printf("Integer %d is NOT evenly divisible by integer %d", number1, number2);
    }

    return 0;
}