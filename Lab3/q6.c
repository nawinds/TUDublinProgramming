/*
Program Description: Q6. Transforming temperature from fahrenheit to celsius
Author: Nikita Aksenov
Date: 10/10/23
*/

#include <stdio.h>

int main()
{
    float fahrenheit_temp = 0;
    float celsius_temp = 0;

    
    printf("Enter a temperature in degrees Fahrenheit: ");
    scanf("%f", &fahrenheit_temp);
    
    celsius_temp = (fahrenheit_temp - 32.0) * (5.0 / 9.0);

    printf("%f", celsius_temp);    

    return 0;
}   