/*
Program Description: Entering and printing 3 numbers
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

    printf("%f\n", a);
    printf("%f\n", b);
    printf("%f\n", c);

    return 0;
}