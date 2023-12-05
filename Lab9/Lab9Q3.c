/*
Program Description: using pointers to print variable addresses and their values
Author: Nikita Aksenov
Date: 5/12/2023
*/

#include <stdio.h>

int main()
{
    float input1, input2;
    float *ptr1, *ptr2;


    scanf("%f", &input1);
    scanf("%f", &input2);

    printf("input1 address %p\n", &input1);
    printf("input2 address %p\n", &input2);

    printf("ptr1 address %p\n", &ptr1);
    printf("ptr2 address %p\n", &ptr2);

    ptr1 = &input1;
    ptr2 = &input2;

    printf("ptr1 = %p\n", ptr1);
    printf("ptr2 = %p\n", ptr2);

    printf("*ptr1 = %f\n", *ptr1);
    printf("*ptr2 = %f\n", *ptr2);

    return 0;
}
