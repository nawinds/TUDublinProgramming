/*
Program Description: Different char array initialisation
Author: Nikita Aksenov
Date: 20/02/2024
*/
#include <stdio.h>
#define MAX_SIZE 30


int main()
{
    // initialise examples 
    char my_word1[] = "Hello";
    char my_word2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char my_word3[] = {'H', 'i'};

    
    // printong with puts
    puts(my_word1);
    puts(my_word2);
    puts(my_word3);

    printf("\n");
    
    // printing with printf
    printf("%s\n", my_word1);
    printf("%s\n", my_word2);
    printf("%s\n", my_word3);

    return 0;
}