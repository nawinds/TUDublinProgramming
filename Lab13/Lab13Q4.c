/*
Program Description: Array modify
Author: Nikita Aksenov
Date: 13/02/2024
*/
#include <stdio.h>
#define SIZE 5


void array_modify(int arr[]);


int main()
{
    int array1[SIZE];


    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array1[i]);
    }

    array_modify(array1);

    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n", array1[i]);
    }
}

void array_modify(int arr[])
{
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = arr[i] * 2;
    }
}
