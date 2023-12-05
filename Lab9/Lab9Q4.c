/*
Program Description: using pointers to print variable addresses and their values
Author: Nikita Aksenov
Date: 5/12/2023
*/

#include <stdio.h>

int main()
{
    int num1, num2;
    int *ptr1, *ptr2, *sum;


    scanf("%d", &num1);
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    *sum = *ptr1 + *ptr2;

    printf("sum = %d\n", *sum);

    return 0;
}
