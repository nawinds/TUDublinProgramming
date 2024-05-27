/*
Program Description: Guessing generated random numbers
Author: Nikita Aksenov
Date: 28/11/2023
*/

#include <stdio.h>
#include <stdlib.h> // this header file is required for the rand() function
#include <time.h> // used in srand() for seeding purposes

#define MAX_ATTEMPTS 5

int main()
{
    int num = 0; // variable for generated number
    int guessHistory[MAX_ATTEMPTS]; // history of guesses
    int attempts = 0; // number of used attempts
    
    
    printf("Generating a random number between 1 - 25 \n");
    
    // seed the random number generator with a range 0 - large number
    srand(time(NULL));
    
    // num is assigned a random number between 1 - 10 
    num = (rand() % 25) + 1;
    
    printf("Now guess the generated number. You have %d attempts.\n", MAX_ATTEMPTS);

    // loop for guessing the number, that is executed until either
    // user guesses the random number or runs out of attempts
    while (attempts < 5 && guessHistory[attempts - 1] != num)
    {
        printf("ATTEMPT %d. Enter a number between 1 - 25: ", attempts + 1);

        // scanning number from user
        scanf("%d", &guessHistory[attempts]);
        
        // comparison between entered number and the generated one
        if (guessHistory[attempts] < num)
        {
            printf("Your guess is too low.\n");
        }
        else if (guessHistory[attempts] > num)
        {
            printf("Your guess is too high.\n");
        }
        else
        {
            printf("Your guess is correct! Congratulations!\n");
        }

        // incrementing number of attempts
        attempts++;
    } // end loop

    // checking if user ran out of attempts without correct guess
    if (guessHistory[attempts - 1] != num)
    {
        printf("You are out of attempts!\n");
    }

    printf("Your guess history is as following: ");

    // printing guess history separated by commas
    for (int i = 0; i < attempts - 1; i++)
    {
        printf("%d, ", guessHistory[i]);
    }
    
    // printing last guess with full stop at the end
    printf("%d.\n", guessHistory[attempts - 1]);
    
    return 0;
    
} // end main