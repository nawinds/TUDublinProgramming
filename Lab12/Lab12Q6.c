/*
Program Description: Pass by reference example
Author: Nikita Aksenov
Date: 06/02/2024
*/

#include <stdio.h>
#include <stdlib.h>

// function signature
void value_change(int*);

int main() {
    // initialising integer
    int num = 1;

    
    // initial print
    printf("%d\n", num);
    
    // function call
    value_change(&num);
    
    // last print
    printf("%d\n", num);
}

// function with pass by reference argument
void value_change(int* num) {
    // incrementing integer by 2
    (*num) += 2;

    // printing integer value after increment
    printf("%d\n", (*num));
}
