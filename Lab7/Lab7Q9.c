/*
Program Description: Finding negative numbers in a 2-D array
Author: Nikita Aksenov
Date: 14/11/2023
*/

#include <stdio.h>

#define NO_OF_ROWS 4
#define NO_OF_COLS 5

int main() {
    float array[NO_OF_ROWS][NO_OF_COLS];


    // Scanning the array from the keyboard
    for (int i = 0; i < NO_OF_ROWS; i++)
    {
        for (int j = 0; j < NO_OF_COLS; j++)
        {
            printf("Enter a number for array[%d][%d]: ", i, j);
            scanf("%f", &array[i][j]);
        }
    }

    for (int i = 0; i < NO_OF_ROWS; i++)
    {
        for (int j = 0; j < NO_OF_COLS; j++)
        {
            if (array[i][j] < 0)
            {
                printf("array[%d][%d] = %f\n", i, j, array[i][j]);
            }
        }
    }

    return 0;
}
