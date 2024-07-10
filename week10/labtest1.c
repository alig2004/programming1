/*
Program Description: Program to get a random number between 1 and 25, take in a user guess (5 guesses max), state whether a guess is too high, too low or is correct, keep track of guesses with an array and display it
Author: Alison Gleeson
Date: 28/11/2023
*/

#include <stdio.h>
#include <stdlib.h> // this header file is required for the rand() function
#include <time.h> // used in srand() for seeding purposes

#define MAX_ATTEMPTS 5

int main()
{
    int num = 0;
    int guessHistory[MAX_ATTEMPTS] = {0}; //initialised to 0 here due to errors when done elsewhere, sorry if that wasn't supposed to be done
    int attempts = 0;
    // place any extra variables here
    int guess = 0;
    int i;
    
    
    printf("Generating a random number between 1 - 25 \n");
    
    // seed the random number generator with a range 0 - large number
    srand(time(NULL));
    
    // num is assigned a random number between 1 - 10 
    num = (rand() % 25) + 1;
    
    // Enter your code here and onward (declare any extra variables above)


    //getting user guess 
    printf("Enter a number between 1 and 25 (inclusive). You have 5 attempts to guess the number:\n");

    for (attempts=0; attempts<MAX_ATTEMPTS; attempts++)
    {//begin for loop

        scanf("%d", &guess);

        //storing the guess in the array
        guessHistory[attempts] = guess;

        //if the user guesses correctly
        if (guess == num)
        {//begin if

            printf("\nCongratulations! You guessed correctly and won!\n");
            attempts = MAX_ATTEMPTS + 1;

        }//end if

        //if the user guesses above
        else if (guess > num)
        {//begin else if

            printf("\nYour guess is too high. Try again\n");

        }//end else if

        //if user guesses below
        else
        {//begin else

            printf("\nYour guess is too low. Try again\n");

        }//end else

    }//end for loop

    //if user runs out of guess
    if (attempts == MAX_ATTEMPTS)
    {//begin if

        printf("\nYou've run out of guesses. Game over\n");

    }//end if

    //displaying previous guesses
    printf("\n\nHere are your previous guesses:\n");
    for (i = 0; i<MAX_ATTEMPTS; i++)
    {//begin for loop

        //if to prevent any unused guess being displayed
        if (guessHistory[i] == 0)
        {//begin if

            printf("");

        }//end if

        else
        {
            printf("%d\n", guessHistory[i]);
        }

    }//end for loop
    
    return 0;
    
} // end main