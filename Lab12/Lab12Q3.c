/*
Program Description: Finding the highest of 3 numbers using separate function
Author: Nikita Aksenov
Date: 06/02/2024
*/

#include <stdio.h>
#include <stdlib.h>

int find_highest(int, int, int);

int main() {
    int n1, n2, n3;


    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    printf("The highest is %d.\n", find_highest(n1, n2, n3));
}

int find_highest(int num1, int num2, int num3) {
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            return num1;
        }
        else
        {
            return num3;
        }
    }
    else
    {
        if (num2 > num3)
        {
            return num2;
        }
        else
        {
            return num3;
        }
    }
}
