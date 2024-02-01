/*
Program Description: Printing character n times using function
Author: Nikita Aksenov
Date: 30/01/2024
*/

#include <stdio.h>
#include <stdlib.h>

void print_char(char, int);

int main() {
    char input_char;
    int input_int;
    scanf("%c", &input_char);
    scanf("%d", &input_int);
    print_char(input_char, input_int);
}

void print_char(char char_to_display, int number_of_stars) {
    for (int i = 0; i < number_of_stars; i++) {
        printf("%c", char_to_display);
    }
    printf("\n");
}
