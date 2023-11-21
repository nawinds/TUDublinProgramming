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
    int *ptr;
    var1 = 1;
    ptr = &var1;


    printf("the address of var1 is %d", &var1); // the %d should be %p
    printf("ptr contains %p", ptr); /* there is a missing & and should be
    &ptr */
    printf("*ptr contains %d", ptr);
    return 0;
}