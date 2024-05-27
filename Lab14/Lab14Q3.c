/*
Program Description: 
Author: Nikita Aksenov
Date: 20/02/2024
*/
#include <stdio.h>
#define MAX_SIZE 30


int main()
{
    char *text = "some text";
    printf("%s\n", text);
    printf("%c\n", *text);
    printf("%c\n", *"more text");
    printf("%c\n", *(text+1));
    printf("%s", text+1);
    printf(text);

    *(text+4) = '\0';

    printf("\n%s\n", text);
    printf("%s", "text"[2]);
    printf("%s", "text" + 2);

    return 0;
}