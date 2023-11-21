/*
Program Description: 
Author: Nikita Aksenov
Date: 21/11/2023
*/

#include <stdio.h>

#define ROWS 4
#define COLS 6

int main()
{
    int data[ROWS][COLS] = { {3, 2, 5, 7, 4, 2},
                             {1, 4, 4, 8, 13, 1},
                             {9, 1, 0, 2, 4, 4},
                             {0, 2, 6, 3, -1, -8}
                           };
    int sum = 0;
    int i, j;

    // compute the sum
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {       
            sum += data[i][j];
        }
    }
    
    printf("Sum = %d\n", sum);

    return 0;
}