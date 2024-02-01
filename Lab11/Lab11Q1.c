/*
Program Description: Printing 10 stars using a separate function
Author: Nikita Aksenov
Date: 30/01/2024
*/

#include <stdio.h>
#include <stdlib.h>
#define NO_OF_STARS 10

void print_stars(int);

int main() {
    print_stars(NO_OF_STARS);
}

void print_stars(int number_of_stars) {
    for (int i = 0; i < number_of_stars; i++) {
        printf("*");
    }
    printf("\n");
}
