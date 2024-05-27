/*
Program Description: blank lines remover
Author: Nikita Aksenov
Date: 16/04/24
*/
#include <stdio.h>

int main()
{
    FILE *f1, *f2;
    char char1, char2;

    f1 = fopen("1.txt", "r");
    f2 = fopen("2.txt", "r");

    if (f1 == NULL)
    {
        printf("Error opening file 1\n");
    }
    else
    {
        printf("1.txt opened successfully\n");

        if (f2 == NULL)
        {
            printf("Error opening file 2\n");
        }
        else
        {
            printf("2.txt opened successfully\n\n");

            while(((char1 = fgetc(f1)) != EOF) && ((char2 = fgetc(f2)) != EOF))
            {
                if (char1 != char2)
                {
                    printf("%c (file 1) is not equal to %c (file 2)\n", char1, char2);
                }
            }

            fclose(f2);
        }

        fclose(f1);
    }

    return 0;
}