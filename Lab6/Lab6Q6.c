/*
Program Description: Entering 3 integers int array and sorting it (bubble sort)
Author: Nikita Aksenov
Date: 07/11/2023
*/

#include <stdio.h>

#define NO_OF_INTEGERS 5

int main()
{
    // Initialising the array
    int array1[NO_OF_INTEGERS];
    int no_of_swaps = -1;
    int temporary_variable;

    
    // Scanning 3 integers to put in the array1
    for (int i = 0; i < NO_OF_INTEGERS; i++)
    {
        scanf("%d", &array1[i]);
    }
    
    // Sorting array1
    while (no_of_swaps != 0)
    {
        no_of_swaps = 0;
        for (int i = 1; i < NO_OF_INTEGERS; i++)
        {
            if (array1[i - 1] > array1[i])
            {
                temporary_variable = array1[i - 1];
                array1[i - 1] = array1[i];
                array1[i] = temporary_variable;
                no_of_swaps++;
            }
        }
    }
    
    // Displaying array1
    for (int i = 0; i < NO_OF_INTEGERS; i++)
    {
        printf("%d", array1[i]);
    }

    return 0;
}