/*
Program Description: Displaying numbers 10 to 1 separated by commas
Author: Nikita Aksenov
Date: 24/10/2023
*/
#include <stdio.h>

int main()
{
    int current_number = 10;
    while (current_number != 1)
    {
        printf("%d,", current_number);
        current_number--;
    }
    printf("%d", current_number);
}