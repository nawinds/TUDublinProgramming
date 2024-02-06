/*
Program Description: Calculating the average of 3 numbers using separate function
Author: Nikita Aksenov
Date: 06/02/2024
*/

#include <stdio.h>
#include <stdlib.h>

float get_average(int, int, int);

int main() {
    int n1, n2, n3;


    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    printf("The average is %f.\n", get_average(n1, n2, n3));
}

float get_average(int num1, int num2, int num3) {
    return (float)(num1 + num2 + num3) / 3;
}
