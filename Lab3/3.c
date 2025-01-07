/*
Program Description: Entering 3 float variables and printing them with various number of decimal places displayed
Author: Nikita Aksenov
Date: 10/10/23
*/

#include <stdio.h>

int main()
{
    float a = 0;
    float b = 0;
    float c = 0;

    
    printf("Enter variable a: ");
    scanf("%f", &a);
    printf("Enter variable b: ");
    scanf("%f", &b);
    printf("Enter variable c: ");
    scanf("%f", &c);

    printf("%.4f\n", a);
    printf("%.3f\n", b);
    printf("%.0f\n", c);

    return 0;
}