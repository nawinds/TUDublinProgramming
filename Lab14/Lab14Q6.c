/*
Program Description: Read in a name and print its content separated by spaces.
Author: Nikita Aksenov
Date: 20/02/2024
*/
#include <stdio.h>
#define MAX_SIZE 30


int main()
{
    // initialise name string
    char name[MAX_SIZE];

    
    // read name from user
    fgets(name, MAX_SIZE, stdin);
    
    // iterate through the string
    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (name[i] == '\n') // if string ended
        {
            break;
        }

        // print each character and a space
        printf("%c", name[i]);
        printf(" ");
    }

    printf("\n");

    return 0;
}