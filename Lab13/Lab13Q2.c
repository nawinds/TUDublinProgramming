/*
Program Description: Array pass
Author: Nikita Aksenov
Date: 13/02/2024
*/
#include <stdio.h>
#define SIZE 5


int array_max(int arr[]);


int main()
{
    int array1[SIZE];


    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array1[i]);
    }


    printf("The maximum number in the array is: %d\n", array_max(array1));
}

int array_max(int arr[])
{
    int max = arr[0];

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}
