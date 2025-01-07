/*
Program Description: Entering 5 characters and displaying them
Author: Nikita Aksenov
Date: 07/11/2023
*/

#include <stdio.h>

#define NO_OF_CHARS 5

int main()
{
    // Initialising the array
    char array1[NO_OF_CHARS];

    
    // Scanning 5 characters to put in the array1
    for (int i = 0; i < NO_OF_CHARS; i++)
    {
        scanf("%c", &array1[i]);
    }
    
    // Displaying contents of array1
    for (int i = 0; i < NO_OF_CHARS; i++)
    {
        printf("%c; ", array1[i]);
    }

    return 0;
}