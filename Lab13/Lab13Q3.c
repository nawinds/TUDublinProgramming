/*
Program Description: Average of an array
Author: Nikita Aksenov
Date: 13/02/2024
*/
#include <stdio.h>
#define SIZE 5


float array_avg(int arr[]);


int main()
{
    int array1[SIZE];


    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array1[i]);
    }


    printf("The average of numbers in the array is: %f\n", array_avg(array1));
}

float array_avg(int arr[])
{
    int sum = arr[0];

    for (int i = 1; i < SIZE; i++)
    {
        sum += arr[i];
    }

    return (float) sum / SIZE;
}
