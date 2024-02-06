/*
Program Description: Finding the most common character of 3 using separate function
Author: Nikita Aksenov
Date: 06/02/2024
*/

#include <stdio.h>
#include <stdlib.h>

char find_most_common(char, char, char);

int main() {
    char c1, c2, c3;


    scanf("%c", &c1);
    scanf("%c", &c2);
    scanf("%c", &c3);

    printf("The most common character is %c.\n", find_most_common(c1, c2, c3));
}

char find_most_common(char ch1, char ch2, char ch3) {
    if (ch1 == ch2)
    {
        return ch1;
    }
    if (ch1 == ch3)
    {
        return ch1;
    }
    if (ch2 == ch3)
    {
        return ch2;
    }
    return ch1;
}
