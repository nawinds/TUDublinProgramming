/*
Program Description: Using pointer notation to scan the first array and copy it into the second
Author: Nikita Aksenov
Date: 5/12/2023
*/

#include <stdio.h>

#define SIZE 3

int main()
{
    // declare 2 arrays
    float arr1[SIZE], arr2[SIZE];


    printf("Enter %d numbers: ", SIZE);
    
    // scanning 1st array values
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%f", (arr1 + i));
    }

    // copying 1st array into 2nd
    for (int i = 0; i < SIZE; i++)
    {
        *(arr2 + i) = *(arr1 + i);
    }
    
    printf("arr1 = [");
    
    // dispalaying 1st array
    for (int i = 0; i < SIZE; i++)
    {
        printf("%f, ", *(arr1 + i));
    }

    printf("] \narr2 = [");
    
    // displaying 2nd array
    for (int i = 0; i < SIZE; i++)
    {
        printf("%f, ", *(arr2 + i));
    }
    
    printf("]\n");

    return 0;
}
