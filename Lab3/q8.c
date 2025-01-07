/*
Program Description: Q8. Calculating sum and average of the 3 variables
Author: Nikita Aksenov
Date: 10/10/23
*/

#include <stdio.h>

int main()
{
    float number1 = 0;
    float number2 = 0;
    float number3 = 0;
    float sum = 0;
    float average = 0;

    
    // Entering first number from the keyboard
    printf("Enter 1st variable: ");
    scanf("%f", &number1);
    
    // Entering second number from the keyboard
    printf("Enter 2nd variable: ");
    scanf("%f", &number2);
    
    // Entering third number from the keyboard
    printf("Enter 3rd variable: ");
    scanf("%f", &number3);
    
    // (a) Calculating the sum of these 3 variables
    sum = number1 + number2 + number3;

    // (b) Calculating the average of these 3 variables
    average = sum / 3;

    printf("\n(a) Sum of these variables is %.3f\n", sum);
    printf("(b) Average of these variables is %.3f", average);

    return 0;
}   