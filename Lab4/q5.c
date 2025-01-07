/*
Program Description: Determining if a triangle is valid
Author: Nikita Aksenov
Date: 17/10/2023
*/
#include <stdio.h>

int main()
{
    int side1, side2, side3;  // initializing variables for triangle sides


    printf("Enter the first side: ");
    scanf("%d", &side1);  // scanning first side from the keyboard

    printf("Enter the second side: ");
    scanf("%d", &side2);  // scanning second side from the keyboard

    printf("Enter the third side: ");
    scanf("%d", &side3);  // scanning third side from the keyboard

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)  // if the triangle is valid
    {
        printf("This triangle is valid");
    }
    else
    {
        printf("This triangle is invalid");
    }

    return 0;
}