/*
Program Description: Q5. Calculating the number of hert beats throughout the whole user life
Author: Nikita Aksenov
Date: 10/10/23
*/

#include <stdio.h>

int main()
{
    int age = 0;
    int beats = 0;

    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    beats = age * 365 * 24 * 60 * 60 * 75;

    printf("%d", beats);    

    return 0;
}