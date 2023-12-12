/*
Program Description: Calculation of miles per litre
Author: Nikita Aksenov
Date: 12/12/23
*/

#include <stdio.h>

int main()
{
    float litres[] = {11.5, 11.21, 12.7, 12.6, 12.4};
    float miles[] = {471.5, 358.72, 495.3, 453.6, 421.6};
    int mpl[5];
    for (int i = 0; i < 5; i++)
    {
        *(mpl + i) = *(miles + i) / *(litres + i);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(mpl + i));
    }
    return 0;
}