/*
Program Description: Displaying the array in different ways
Author: Nikita Aksenov
Date: 14/11/2023
*/

#include <stdio.h>

#define NO_OF_ELEMENTS 15

int main() {
    int array[NO_OF_ELEMENTS];


    printf("Enter %d integers:\n", NO_OF_ELEMENTS);

    for (int i = 0; i < NO_OF_ELEMENTS; i++) {
        scanf("%d", &array[i]);
    }
    
    printf("\n");
    
    for (int i = 0; i < NO_OF_ELEMENTS; i++) {
        printf("%d\n", array[i]);
    }

    printf("\n");
    
    for (int i = 0; i < NO_OF_ELEMENTS; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
    
    for (int i = NO_OF_ELEMENTS - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }

    return 0;
}
