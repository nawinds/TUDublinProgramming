/*
Program Descriptons: separate functions for comparing string with "Hello World" and counting "is" occurences
Author: Nikita Aksenov
Date: 05/03/24
*/
#include <stdio.h>
#include <string.h>

#define SIZE 50


// function signatures
void is_hello_world(char[]);
void count_is_frequency(char[]);

int main()
{
    char str[SIZE];  // string declaration

    
    // input string from the keyboard
    fgets(str, SIZE, stdin);
    str[strlen(str) - 1] = '\0';
    
    is_hello_world(str);

    count_is_frequency(str);
}

void is_hello_world(char str[])
{
    // using strcmp to compare strings
    if (strcmp(str, "Hello World") == 0) 
    {
        printf("String equals to the string \"Hello World\"\n");
    }
    else
    {
        printf("String is NOT equal to the string \"Hello World\"\n");
    }
}

void count_is_frequency(char str[])
{
    // initialising counter
    int cnt = 1;
    char *found;

    
    if (strncmp(str, "is ", 3) == 0)
    {
        cnt++;
    }

    found = strstr(str, "is");
    if (found != NULL)
    {
        printf("Found is\n");
    }
    else
    {
        return;
    }

    // iterating through the string
    while ( (found = strstr(found, " is ")) != NULL)
    {   
        // increment counter
        cnt++;

        // move pointer to point at the next character following the occurance of " is " in the sentence
        found++;
    }

    printf("The amount of \"is\" occurences in the string is: %d\n", cnt);
}