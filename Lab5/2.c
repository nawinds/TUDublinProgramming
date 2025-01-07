/*
Program Description: Using a loop for making operations with entered value
Author: Nikita Aksenov
Date: 24/10/2023
*/
#include <stdio.h>

int main()
{
    int integer;
    int steps = 0;


    // Asking the user to enter the integer
    printf("Enter the integer greater than 1\n");
    
    // Scanning the integer from the keyboard
    scanf("%d", &integer);

    while (integer < 1)
    {
        // Displaying error message
        printf("Error! Enter the integer greater than 1!\n");

        // Scanning the integer from the keyboard
        scanf("%d", &integer);
    }
    
    // Displaying the initial integer value
    printf("Value entered is %d\n", integer);

    //  mgmhm h j,m
    while (integer != 1)
    {
        //  mjh mjhmj 
        if (integer % 2 == 0)
        {
            // Half integer if even
            integer = integer / 2;
        }
        else
        {
            // Multiply by 3 and add 1 if odd
            integer = integer * 3 + 1; 
        }

        // Incrementing the number of steps
        steps++;

        //  mhgmjgh mjjghm j
        if (integer != 1)
        {
            // Dislaying next value
            printf("Next value is %d\n", integer);
        }
        else
        {
            printf("Final value %d, number of steps %d\n", integer, steps);
        }
    }

    return 0;
}