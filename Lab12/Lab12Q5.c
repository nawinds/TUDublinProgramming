/*
Program Description: Pass by value example
Author: Nikita Aksenov
Date: 06/02/2024
*/

#include <stdio.h>
#include <stdlib.h>

void value_change(int);

int main() {
    int num = 1;


    printf("%d\n", num);

    value_change(num);

    printf("%d\n", num);
}

void value_change(int num) {
    num += 2;
    printf("%d\n", num);
}
