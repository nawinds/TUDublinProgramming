/*
Program Description: Display a message whether a character is a vowel or not
Author: Nikita Aksenov
Date: 17/10/2023
*/
#include <stdio.h>

int main()
{
    // initializing character variable
    char character;  


    printf("Enter any character: ");
    // scanning character from the keyboard
    scanf("%c", &character);  

    switch (character)
    {
        // defining whether character is a lowercase vowel
        case 'a':  
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        // defining whether character is an uppercase vowel
        case 'A':  
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        {
            printf("This character is a vowel");
            break;
        }
        
        // defining whether character is NOT a vowel
        default:  
        {
            printf("This character is NOT a vowel");
            break;
        }
    }

    return 0;
}