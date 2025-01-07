/*
Program Description: Calculation the result of arithmetic operations
Author: Nikita Aksenov
Date: 03/10/2023
*/
#include <stdio.h>

int main() {
    int result1 = 0;
    int result2 = 0;
    int result3 = 0;
    float result4 = 0;
    int result5 = 0;

    
    result1 = 15 + 10;
    result2 = 15 - 10;
    result3 = 15 * 10;
    result4 = (float)15 / 10;
    result5 = 15 % 3;
    
    printf("15 + 10 = %d\n", result1);
    printf("15 - 10 = %d\n", result2);
    printf("15 * 10 = %d\n", result3);
    printf("15 / 10 = %f\n", result4);
    printf("15  3 = %d\n", result5);
    
    return 0;
}