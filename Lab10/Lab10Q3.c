/*
Program Description: calculation of the average of 5 numbers using calloc
Author: Nikita Aksenov
Date: 12/12/23
*/

#include <stdio.h>
#include <stdlib.h>

#define NUM_OF_ELEMENTS 5

int main()
{
    float *elements_pointer;
    float *average_pointer;
    float sum_of_elements = 0;


    // allocating memory for 5 float elements
    elements_pointer = calloc(NUM_OF_ELEMENTS, sizeof(float));

    // handling memory allocation failure
    if (elements_pointer == NULL)
    {
        printf("\nFailed to allocate memory\n");
        return 1;
    }
    else
    {
        printf("\nEnter the set of %d numbers\n", NUM_OF_ELEMENTS);

        // reading the numbers from user
        for(int i = 0; i < NUM_OF_ELEMENTS; i++)
        {
            scanf("%f", & *(elements_pointer + i));
        }
        
        // calculating the sum of the elements
        for(int i = 0; i < NUM_OF_ELEMENTS; i++)
        {
            sum_of_elements += *(elements_pointer + i);
        }
        
        average_pointer = calloc(1, sizeof(int));

        if (average_pointer == NULL)
        {
            printf("\nFailed to allocate memory\n");

            // freeing the allocated memory
            free(elements_pointer);

            return 1;
        }
        else
        {
            *average_pointer = sum_of_elements / NUM_OF_ELEMENTS;

            // printing the average of the elements
            printf("\nThe average of the elements is %f\n", *average_pointer);

            // freeing the allocated memory
            free(average_pointer);
        }
        
        // freeing the allocated memory
        free(elements_pointer);
    }

    return 0;
}