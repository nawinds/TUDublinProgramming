/*
Program Description: Calculation of the volume of he cube
Author: Nikita Aksenov
Date: 03/10/2023
*/
#include <stdio.h>

int main() {
    float cubeSidesLength = 2.8; // in m
    float cubeVolume = 0;

    
    cubeVolume = cubeSidesLength * cubeSidesLength * cubeSidesLength;
    
    printf("Cube volume: %f", cubeVolume);
    
    return 0;
}