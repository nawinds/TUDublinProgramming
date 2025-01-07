/*
Program Description: Entering 5 integers to put in one array swapping 1st with the 2nd and 3rd with the 4th
Author: Nikita Aksenov
Date: 07/11/2023
*/

#include <stdio.h>

#define NO_OF_INTEGERS 5

int main()
{
    // Initialising the array
    int array1[NO_OF_INTEGERS];
    // Initialusing temporary variable for swapping integers in the array
    int temporary_variable;

    
    // Scanning 5 integers to put in the array1
    for (int i = 0; i < NO_OF_INTEGERS; i++)
    {
        scanf("%d", &array1[i]);
    }
    
    // Displaying contents of array1
    for (int i = 0; i < NO_OF_INTEGERS; i++)
    {
        printf("%d; ", array1[i]);
    }

    printf("\n\n");
    
    // Swapping 1 and 2 integer of the array
    temporary_variable = array1[0];
    array1[0] = array1[1];
    array1[1] = temporary_variable;

    // Swapping 3 and 4 integer of the array
    temporary_variable = array1[2];
    array1[2] = array1[3];
    array1[3] = temporary_variable;

    // Displaying updated contents of array1
    for (int i = 0; i < NO_OF_INTEGERS; i++)
    {
        printf("%d; ", array1[i]);
    }

    return 0;
}