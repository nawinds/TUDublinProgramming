/*
Program Description: comparing 2 strings
Author: Nikita Aksenov
Date: 27/02/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 30

int main()
{
    char word1[BUFFER_SIZE], word2[BUFFER_SIZE];


    fgets(word1, BUFFER_SIZE, stdin);
    fgets(word2, BUFFER_SIZE, stdin);

    if (strcmp(word1, word2) == 0)
    {
        printf("Strings are EQUAL\n");
    }
    else
    {
        printf("Strings are DIFFERENT\n");
    }
}