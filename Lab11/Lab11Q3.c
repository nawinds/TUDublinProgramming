/*
Program Description: 2 functions for finding the max and min value of 3 numbers
Author: Nikita Aksenov
Date: 30/01/2024
*/

#include <stdio.h>
#include <stdlib.h>

int max_num(int, int, int);
int min_num(int, int, int);

int main() {
    int int1, int2, int3;
    scanf("%d", &int1);
    scanf("%d", &int2);
    scanf("%d", &int3);
    printf("The highest value is %d\n", max_num(int1, int2, int3));
    printf("The lowest value is %d\n", min_num(int1, int2, int3));
}

int max_num(int num1, int num2, int num3) {
    if (num1 > num2) {
        if (num1 > num3) {
            return num1;
        } else {
            return num3;
        }
    } else {
        if (num2 > num3) {
            return num2;
        } else {
            return num3;
        }
    }
}

int min_num(int num1, int num2, int num3) {
    if (num1 < num2) {
        if (num1 < num3) {
            return num1;
        } else {
            return num3;
        }
    } else {
        if (num2 < num3) {
            return num2;
        } else {
            return num3;
        }
    }
}
