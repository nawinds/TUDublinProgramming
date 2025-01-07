/*
Program Description: Entering 3 temperatures in Fahrenheit and displaying them with corresponding temperatures in Celsius
Author: Nikita Aksenov
Date: 07/11/2023
*/

#include <stdio.h>
#define NO_OF_TEMPERATURES 3

int main()
{
    float temperatures_fahrenheit[NO_OF_TEMPERATURES];

    
    // Scanning 3 temperatures to put in the array
    for (int i = 0; i < NO_OF_TEMPERATURES; i++)
    {
        scanf("%f", &temperatures_fahrenheit[i]);
    }
    
    // Displaying temperatures
    for (int i = 0; i < NO_OF_TEMPERATURES; i++)
    {
        printf("%d. Fahrenheit: %f, Celsius: %f\n", i + 1, temperatures_fahrenheit[i], (temperatures_fahrenheit[i] - 32.0) * (5.0 / 9.0));
    }
    return 0;
}