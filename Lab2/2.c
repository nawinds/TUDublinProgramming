/*
Program Description: Calculation of the volume and the surface area of the box; Calculation of the area of a circle
Author: Nikita Aksenov
Date: 03/10/2023
*/
#include <stdio.h>

int main() {
    float boxHeight = 10;  // in cm
    float boxLength = 11.5; // in cm
    float boxWidth = 2.5; // in cm
    float circleRadius = 4.8; // in cm

    float boxVolume = 0; // in cm3
    float boxSurfaceArea = 0; // in cm2
    float circleArea = 0; // in cm2


    // Calculate the volume of the box
    boxVolume = boxHeight * boxLength * boxWidth;

    // Calculate the surface area of the box
    boxSurfaceArea = boxHeight * boxLength * 2 + boxHeight * boxWidth * 2 + boxLength * boxWidth * 2;
    
    printf("Box volume: %f cm3\n", boxVolume);
    printf("Box surface area: %f cm2\n", boxSurfaceArea);
    
    // Calculate the area of the surface
    circleArea = 3.13 * circleRadius * circleRadius;
    
    printf("Circle area: %f cm2", circleArea);

    return 0;
}