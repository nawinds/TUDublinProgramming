/*
Program Description: 2 functions for finding the sum and average of 3 numbers
Author: Nikita Aksenov
Date: 30/01/2024
*/

#include <stdio.h>
#include <stdlib.h>

// function signatures
void sum(int, int, int);
void average(int);

int main() {
    int int1, int2, int3;


    // input prompt
    printf("Input 3 integers below:\n");
    
    // input for 3 integers
    scanf("%d", &int1);
    scanf("%d", &int2);
    scanf("%d", &int3);

    // call of the sum() function
    sum(int1, int2, int3);
}

void sum(int num1, int num2, int num3) {
    // calculating the sum of 3 integers
    int sum_of_3_nums = num1 + num2 + num3;

    // call of the average() function
    average(sum_of_3_nums);
}

void average(int sum_of_nums) {
    // calculating the average value
    float average_value = (float)sum_of_nums / 3;

    // printing the average value
    printf("%f\n", average_value);
}
