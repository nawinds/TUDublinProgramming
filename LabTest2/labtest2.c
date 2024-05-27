/*
Program Description: A word guessing game
Author: Nikita Aksenov
Date: 9/04/2024
*/

#include <stdio.h>
#include <string.h>

#define ATTEMPTS_ALLOWED 7
#define CORRECT_WORD_LENGTH 6

// function signature
void print_redacted_word(int position, char guessed_character);

int main()
{
    // correct word to guess
    char correct_word[CORRECT_WORD_LENGTH + 1] = "coding";
    // variable for showing the progress and defining if the user won
    char guessed_word[CORRECT_WORD_LENGTH + 1] = "______";
    // last entered character
    char last_guess;
    // amount of remaining attempts
    int attempts_remaining = ATTEMPTS_ALLOWED;
    // character found in the correct word flag
    int found;

    
    // display instructions
    printf("This is a word guessing game.\n");
    printf("Guess characters that are present in the word.\n");
    printf("You are allowed a maximum of %d wrong guesses.\n\n", ATTEMPTS_ALLOWED);

    // game loop
    while (attempts_remaining > 0)
    {
        // prompt to enter a guess
        printf("Enter a character to guess: ");
        
        // scan the guessed character from the keyboard
        scanf("%c", &last_guess);
        // ignore the enter key as the character
        while(getchar() != '\n');
        
        // set the flag to 0 until the guessed character is found in the correct word
        found = 0;

        // iterate through the correct word to check
        // if the character is in the correct word
        for (int j = 0; j < CORRECT_WORD_LENGTH; j++)
        {
            // if character is found in the correct word
            if (last_guess == correct_word[j])
            {
                // update the guessed word
                guessed_word[j] = last_guess;
                
                // if the user guessed the whole word and won
                if (strcmp(guessed_word, correct_word) == 0)
                {
                    printf("You guessed the word \"coding\"! Congratulations!\n");

                    // finish the program
                    return 0;
                }

                // set the flag to 1 as the character is found
                found = 1;

                printf("Correct guess. It is located here: ");

                // print the position of the character guessed
                print_redacted_word(j, last_guess);

                // print the whole word guessed with underscores instead of unknown characters
                printf("You guessed: ");
                puts(guessed_word);
                
                // break the loop, as the character is already found in the word
                break;
            }
        }

        // if the entered character is not in the word
        if (found == 0)
        {
            attempts_remaining--;
            printf("%c is not in the word. Attempts remaining: %d\n", last_guess, attempts_remaining);
        }
    }

    // if the user did not guess the word inside the loop
    printf("Game over, you have run out of attempts. The correct word is: ");
    puts(correct_word);

    return 0;
}

// function for showing the position of the guessed character
void print_redacted_word(int position, char guessed_character)
{
    // print underscores before the guessed character
    for (int k = 0; k < position; k++)
    {
        printf("_");
    }
    
    // print the guessed character
    printf("%c", guessed_character);

    // print underscores after the guessed character
    for (int k = position + 1; k < CORRECT_WORD_LENGTH; k++)
    {
        printf("_");
    }

    printf("\n");
}