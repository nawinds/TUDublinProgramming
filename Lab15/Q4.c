/*
Program Description: concatenation and string length
Author: Nikita Aksenov
Date: 27/02/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 30

int string_length(char[]);
void concatenate_to_string(char[]);


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

    concatenate_to_string(word1);
}

int string_length(char str[])
{
    return strlen(str);
}

void concatenate_to_string(char word[])
{
    char initial_string[22 + BUFFER_SIZE] = "First word entered is ";

    strcat(initial_string, word);
    
    puts(initial_string);
    printf("String length is %d\n", string_length(initial_string));
}