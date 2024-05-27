/*
Program Description: Counting even numbers in the array
Author: Nikita Aksenov
Date: 13/02/2024
*/
#include <stdio.h>
#define SIZE 5


// function signature
int array_even(int arr[]);


int main()
{
    // declaring the array
    int array1[SIZE];

 
    // scanning array contents
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array1[i]);
    }
 
    // calling the function and printing the result
    printf("The number of even numbers in the array is: %d\n", array_even(array1));
}

int array_even(int arr[])
{
    // declaring a counter for even numbers
    int counter = 0;

    
    // iterating through the array
    for (int i = 0; i < SIZE; i++)
    {
        // checking if the number is even
        if (arr[i] % 2 == 0)
        {
            // incrementing the counter
            counter++;
            printf("%d is even.\n", arr[i]);
        }
        else
        {
            printf("%d is odd.\n", arr[i]);
        }
    }
    
    // returning the counter
    return counter;
}
