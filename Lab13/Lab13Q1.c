/*
Program Description: Square and circle area calculation using pass by reference
Author: Nikita Aksenov
Date: 13/02/2024
*/
#include <stdio.h>


float square_area(float*);
float circle_area(float*);


int main()
{
    float square_side, radius;


    scanf("%f", &square_side);
    scanf("%f", &radius);

    printf("The area of the square is: %f\n", square_area(&square_side));
    printf("The area of the circle is: %f\n", circle_area(&radius));
}

float square_area(float *side)
{
    return (*side) * (*side);
}

float circle_area(float *radius)
{
    return 3.14 * (*radius) * (*radius);
}

