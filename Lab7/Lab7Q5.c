/*
Program Description: Multiplying corresponding elements of two arrays
Author: Nikita Aksenov
Date: 14/11/2023
*/

#include <stdio.h>

#define NO_OF_ELEMENTS 5

int main() {
    float array1[NO_OF_ELEMENTS];
    float array2[NO_OF_ELEMENTS];


    printf("Enter %d integers for array 1:\n", NO_OF_ELEMENTS);

    for (int i = 0; i < NO_OF_ELEMENTS; i++) {
        scanf("%f", &array1[i]);
    }

    printf("Enter %d integers for array 2:\n", NO_OF_ELEMENTS);

    for (int i = 0; i < NO_OF_ELEMENTS; i++) {
        scanf("%f", &array2[i]);
    }
    
    printf("\n");
    
    for (int i = 0; i < NO_OF_ELEMENTS; i++) {
        printf("%f\n", array1[i] * array2[i]);
    }

    return 0;
}
