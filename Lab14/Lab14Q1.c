/*
Program Description: 
Author: Nikita Aksenov
Date: 20/02/2024
*/
#include <stdio.h>
#define MAX_SIZE 30


int main()
{
    printf("%5s\n", "abcd");
    printf("%5s\n", "abcdef");
    printf("%-5s\n", "abc");
    printf("%5.2s\n", "abcde");
    printf("%-5.2s\n", "abcde");

    return 0;
}