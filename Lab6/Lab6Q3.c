/*
Program Description: Entering 5 integers to put in one array and reverse copying them into the second array
Author: Nikita Aksenov
Date: 07/11/2023
*/

#include <stdio.h>

#define NO_OF_INTEGERS 5

int main()
{
    // Initialising 2 arrays
    int array1[NO_OF_INTEGERS];
    int array2[NO_OF_INTEGERS];

    
    // Scanning 5 integers to put in the array1
    for (int i = 0; i < NO_OF_INTEGERS; i++)
    {
        scanf("%d", &array1[i]);
    }
    
    // Copying array1 into array2 in reverse order
    for (int i = 0; i < NO_OF_INTEGERS; i++)
    {
        array2[NO_OF_INTEGERS - i - 1] = array1[i];
    }

    // Displaying contents of array2
    for (int i = 0; i < NO_OF_INTEGERS; i++)
    {
        printf("%d; ", array2[i]);
    }

    return 0;
}