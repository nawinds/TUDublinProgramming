/*
Program Description: replace ' ' in array with '_'
Author: Nikita Aksenov
Date: 12/12/23
*/

#include <stdio.h>

int main()
{
    char chars[] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};
    for (int i = 0; i < 8; i++)
    {
        if (*(chars + i) == ' ')
        {
            *(chars + i) = '_';
        }
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%c", *(chars + i));
    }
    return 0;
}