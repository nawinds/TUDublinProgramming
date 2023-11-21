/*
Program Description: Swapping the contents of an array
Author: Nikita Aksenov
Date: 14/11/2023
*/

#include <stdio.h>
#define ARRAY_SIZE 10

int main()
{
    int arr[ARRAY_SIZE];

    
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 9 - i;
    }
    
    // Display the contents of arr[8]
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        arr[i] = arr[ arr[i] ];
    }

    // Display the contents of arr[8]
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}