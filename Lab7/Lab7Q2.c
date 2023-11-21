/*
Program Description: Displaying the smallest and largest values, average of a 2D array
Author: Nikita Aksenov
Date: 14/11/2023
*/

#include <stdio.h>

#define ARRAY_ROWS 3
#define ARRAY_COLS 2

int main()
{
    int array[ARRAY_ROWS][ARRAY_COLS];
    int smallest_value, largest_value;
    int array_sum = 0;

    
    // Scanning the array from the keyboard
    for (int i = 0; i < ARRAY_ROWS; i++)
    {
        for (int j = 0; j < ARRAY_COLS; j++)
        {
            printf("Enter a number for array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    // Display the contents of array
    printf("{\n");
    for (int i = 0; i < ARRAY_ROWS; i++)
    {
        printf("\t{ ");
        for(int j = 0; j < ARRAY_COLS; j++)
        {
            printf("%d, ", array[i][j]);
        }
        printf("}\n");
    }
    printf("}\n");
    printf("\n");
    
    // initialising the smallest and largest values of the array with the first element
    smallest_value = largest_value = array[0][0];

    // Finding the smallest and largest values of the array
    for (int i = 0; i < ARRAY_ROWS; i++)
    {
        for (int j = 0; j < ARRAY_COLS; j++)
        {
            if (array[i][j] < smallest_value)
            {
                smallest_value = array[i][j];
            }
            if (array[i][j] > largest_value)
            {
                largest_value = array[i][j];
            }
        }
    }

    // Displaying the smallest and largest values of the array
    printf("The smallest value is %d\n", smallest_value);
    printf("The largest value is %d\n", largest_value);

    // Calculating sum of all elements in the array
    for(int i = 0; i < ARRAY_ROWS; i++)
    {
        for (int j = 0; j < ARRAY_COLS; j++)
        {
            array_sum += array[i][j];
        }
    }

    // Display the average of all elements in the array
    printf("The average of all elements in the array is %f\n\n", (float) array_sum / (ARRAY_ROWS * ARRAY_COLS));

    return 0;
}