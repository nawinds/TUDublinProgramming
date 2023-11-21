/*
Program Description: 
Author: Nikita Aksenov
Date: 21/11/2023
*/

#include <stdio.h>

#define ROWS 3
#define COLS 2

int main()
{
    int data[ROWS][COLS];
    int sum;
    int highest;

    // scanning the values for the first array
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("Enter a value for array1[%d][%d]: ", i, j);
            scanf("%d", &data[i][j]);
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        sum = 0;
        for (int j = 0; j < COLS; j++)
        {
            sum += data[i][j];
        }
        printf("Sum of row %d = %d\n", i, sum);
    }
    
    for (int j = 0; j < COLS; j++)
    {
        sum = 0;
        for (int i = 0; i < ROWS; i++)
        {
            sum += data[i][j];
        }
        printf("Sum of col %d = %d\n", j, sum);
    }

    highest = data[0][0];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (data[i][j] > highest)
            {
                highest = data[i][j];
            }
        }
    }
    
    printf("Highest value = %d\n", highest);

    return 0;
}