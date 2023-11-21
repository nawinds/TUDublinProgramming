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
    int var1;
    int *ptr = (int *)0xF176BA2;
    ptr++;
    printf("*ptr contains %d", *ptr);
    return 0;
}