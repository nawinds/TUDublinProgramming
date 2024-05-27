/*
Program Description: displaying file text lines with their numbers
Author: Nikita Aksenov
Date: 23/04/2024
*/
#include <stdio.h>

int main()
{
    // file pointer
    FILE *f1;
    // character variable to read the file
    char char1;
    // variable for line number (starts with 2, because 1 printed separately)
    int line_number = 2;


    // opening a file
    f1 = fopen("1.txt", "r");

    // on open error
    if (f1 == NULL)
    {
        printf("Error opening file 1.txt\n");
    }
    else
    {
        // print 1st line number
        printf("1. ");

        // iterating through the characters in a file
        while((char1 = fgetc(f1)) != EOF)
        {
            // if new line detected
            if (char1 == '\n')
            {
                // go to a new line and print its number
                printf("\n%d. ", line_number);
                
                // increment line number
                line_number++;
            }
            else
            {
                // otherwise print the character from the file
                printf("%c", char1);
            }
        }

        // close file
        fclose(f1);
    }

    return 0;
}