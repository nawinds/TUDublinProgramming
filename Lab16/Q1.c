/*
Program Descriptons: separate functions for
    a) counting the number of vowel occurences in a string;
    b) Displaying the string length and reversed string
    c) Concatenate “I entered the string ” with the string
Author: Nikita Aksenov
Date: 05/03/24
*/
#include <stdio.h>
#include <string.h>

#define SIZE 50


// function signatures
void count_vowel_occurences(char[]);
void string_len_and_reversed_string(char[]);
void string_concatenation(char[]);


int main()
{
    char str[SIZE];  // string declaration

    
    // input string from the keyboard
    fgets(str, SIZE, stdin);
    
    void count_vowel_occurences(str);

    void string_len_and_reversed_string(str);

    void string_concatenation(str);
}

void count_vowel_occurences(char str[])
{
    // using strcmp to compare strings
    if (strcmp(str, "Hello World\n") == 0) 
    {
        printf("String equals to the string \"Hello World\"\n");
    }
    else
    {
        printf("String is NOT equal to the string \"Hello World\"\n");
    }
}

void string_len_and_reversed_string(char str[])
{
    // initialising counter
    int cnt = 0;

    
    // iterating through the string
    for (int i = 0; i < SIZE - 1; i++)
    {
        // checking for "is" occurence
        if ((str[i] == 'i') && (str[i+1] == 's'))
        {
            cnt++;
        }
    }

    printf("The amount of \"is\" occurences in the string is: %d\n", cnt);
}
