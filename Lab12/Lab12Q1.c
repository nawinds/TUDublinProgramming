/*
Program Description: Checking if number is even using separate function
Author: Nikita Aksenov
Date: 06/02/2024
*/

#include <stdio.h>
#include <stdlib.h>

int is_even(int);

int main() {
    int num;
    

    scanf("%d", &num);
    if (is_even(num) == 1) {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }
}

int is_even(int number) {
    return number % 2 == 0;
}
