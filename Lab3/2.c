/*
Program Description: Entering and displaying 2 characters
Author: Nikita Aksenov
Date: 10/10/23
*/

#include <stdio.h>

int main()
{
    char a = ' ';
    char b = ' ';

    
    printf("Enter char a: ");
    scanf("%c", &a);

    printf("Enter char b: ");
    while(getchar() != '\n');
    scanf("%c", &b);

    printf("%c\n", a);
    printf("%c\n", b);

    return 0;
}