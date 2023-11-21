/*
Program Description: Initialising two 3x4 arrays
Author: Nikita Aksenov
Date: 21/11/2023
*/

#include <stdio.h>

#define ROWS 3
#define COLS 4

int main()
{
    // initialising 2 3x4 arrays
    int array1[ROWS][COLS];
    int array2[ROWS][COLS];
    // declaring a 3rd array to store the product of the first two
    int array3[ROWS][COLS];


    // scanning the values for the first array
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("Enter a value for array1[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }
    

    // scanning the values for the second array
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("Enter a value for array2[%d][%d]: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    
    // multiplying the first two arrays and storing the result in the 3rd
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            array3[i][j] = array1[i][j] * array2[i][j];
        }
    }
    
    // printing the 3rd array
    printf("{\n");

    for (int i = 0; i < ROWS; i++)
    {
        printf("\t");

        for (int j = 0; j < COLS; j++)
        {
            printf("%d, ", array3[i][j]);
        }

        printf("\n");
    }

    printf("}\n");

    return 0;
}