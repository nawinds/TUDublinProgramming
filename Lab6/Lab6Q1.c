/*
Program Description: Entering an array of 5 integers and copying it
Author: Nikita Aksenov
Date: 07/11/2023
*/

#include <stdio.h>
#define NO_OF_INTEGERS 5

int main()
{
    int array1[NO_OF_INTEGERS];
    int array2[NO_OF_INTEGERS];

    
    // Scanning NO_OF_INTEGERS numbers to put in the array1
    for (int i = 0; i < NO_OF_INTEGERS; i++)
    {
        scanf("%d", &array1[i]);
    }
    
    // Copying array1 into array2
    for (int i = 0; i < NO_OF_INTEGERS; i++)
    {
        array2[i] = array1[i];
    }
    
    // Displaying contents of array2
    for (int i = 0; i < NO_OF_INTEGERS; i++)
    {
        printf("%d; ", array2[i]);
    }
    return 0;
}