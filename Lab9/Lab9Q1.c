/*
Program Description: using pointers to print variable addresses and their values
Author: Nikita Aksenov
Date: 5/12/2023
*/

#include <stdio.h>

int main()
{
    int num1;
    char char1;
    int *ptr1;
    char *ptr2;


    num1 = 10;
    char1 = 'a';

    ptr1 = &num1;
    ptr2 = &char1;

    printf("num1 = %d, address %p\n", num1, &num1);
    printf("char1 = %c, address %p\n", char1, &char1);

    printf("num1 address %p\n", ptr1);
    printf("char1 address %p\n", ptr2);

    printf("num1 = %d\n", *ptr1);
    printf("char1 = %c\n", *ptr2);

    return 0;
}
