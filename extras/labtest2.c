/*
Program Description: Word guessing game wherein the user must guess a letter in the word "coding" and is allowed 7 incorrect guesses
    (a) Prompt the user to enter a character and indicate if that character is in the word "coding" (displaying a redacted version of the word with that letter if it is there and "<character> is not in the word. Attempts remaining: <remaining>" if the letter is not)
    (b) Repeat step (a) until all attempts are used or user has guessed the word
    (c) Only 7 incorrect guesses allowed, in event of 7 guesses display "Game over, you have run out of attempts. The correct word is: coding"
Author: Alison Gleeson
Date: 09/04/2024
*/

#include <stdio.h>
#include <string.h>

#define MAX 7


int main()
{
    char word[MAX] = {'c', 'o', 'd', 'i', 'n', 'g', '\0'};
    int wrongGuess_remain = 7;
    char guess = ' ';
    char guessed[MAX] = {'_', '_', '_', '_', '_', '_', '\0'};
    int i;
    int correct_guess = 1;
    int win = 0;


    //getting user input and indicating whether character is in the word
    printf("Welcome to the word guessing game. You must guess one character at a time to reveal the word. You have 7 wrong guesses available.");
    
    //while loop to get user guess and compare to string until too many incorrect guesses have been made or string has been guessed
    while ((wrongGuess_remain != 0) && (win != 1))
    {
        //getting users guess
        printf("\n\nPlease enter guess: ");
        scanf("%c", &guess);

        //clearing the buffer
        while (getchar() != '\n');


        //switch statement to check if the user entered a character that is in the string
        switch(guess)
        {
            //in case of user entering c or C
            case 'c':
            case 'C':
            {
                //placing c in the correct position
                for (i=0; i<MAX; i++)
                {
                    if (word[i] == 'c')
                    {
                        guessed[i] = 'c';
                    }
                } //end placement for loop

                
                printf("Correct guess. It is located here: ");

                //for loop to print current state of the users guessed characters
                for (i = 0; i<MAX; i++)
                {
                    printf("%c ", guessed[i]);
                } //end printing for loop

                break;
            } //end case 'c'

            //in case of user entering o or O
            case 'o':
            case 'O':
            {
                //placing o in the correct position
                for (i=0; i<MAX; i++)
                {
                    if (word[i] == 'o')
                    {
                        guessed[i] = 'o';
                    }
                } //end placement for loop


                printf("Correct guess. It is located here: ");

                //for loop to print current state of the users guessed characters
                for (i = 0; i<MAX; i++)
                {
                    printf("%c ", guessed[i]);
                } //end printing for loop

                break;
            } //end case 'o'

            //in case of user entering d or D
            case 'd':
            case 'D':
            {
                //placing d in the correct position
                for (i=0; i<MAX; i++)
                {
                    if (word[i] == 'd')
                    {
                        guessed[i] = 'd';
                    }
                } //end placement for loop


                printf("Correct guess. It is located here: ");

                //for loop to print current state of the users guessed characters
                for (i = 0; i<MAX; i++)
                {
                    printf("%c ", guessed[i]);
                } //end printing for loop

                break;
            } //end case 'd'

            //in case of user entering i or I
            case 'i':
            case 'I':
            {
                //placing i in the correct position
                for (i=0; i<MAX; i++)
                {
                    if (word[i] == 'i')
                    {
                        guessed[i] = 'i';
                    }
                } //end placement for loop 


                printf("Correct guess. It is located here: ");

                //for loop to print current state of the users guessed characters
                for (i = 0; i<MAX; i++)
                {
                    printf("%c ", guessed[i]);
                } //end printing for loop

                break;
            } //end case 'i'

            //in case of user entering n or N
            case 'n':
            case 'N':
            {
                //placing n in the correct position
                for (i=0; i<MAX; i++)
                {
                    if (word[i] == 'n')
                    {
                        guessed[i] = 'n';
                    }
                } //end placement for loop


                printf("Correct guess. It is located here: ");

                //for loop to print current state of the users guessed characters
                for (i = 0; i<MAX; i++)
                {
                    printf("%c ", guessed[i]);
                } //end printing for loop

                break;
            } //end case 'n'

            //in case of user entering g or G
            case 'g':
            case 'G':
            {
                //placing g in the correct position
                for (i=0; i<MAX; i++)
                {
                    if (word[i] == 'g')
                    {
                        guessed[i] = 'g';
                    }
                } //end placement for loop
                

                printf("Correct guess. It is located here: ");

                //for loop to print current state of the users guessed characters
                for (i = 0; i<MAX; i++)
                {
                    printf("%c ", guessed[i]);
                } //end printing for loop

                break;
            } //end case 'g'

            //default where character entered is not in the word coding
            default:
            {
                //decrementing remaining guesses
                wrongGuess_remain--;

                //informing the user they have guessed wrong and their incorrect guesses remaining
                printf("%c is not in the word. Attempts remaining: %d", guess, wrongGuess_remain);
            } //end default
            
        } //end switch statement


        //checking if the entire word has been guessed and changing win to 1 if it has been
        correct_guess = strcmp(guessed, word);
        if (correct_guess == 0)
        {
            win = 1;
        } //comparison if

    } //end user entry while


    //if the player has correctly guessed the word "coding"
    if (win == 1)
    {
        printf("\n\nYou win! The word was: coding");
    } //end win if
    
    //else the player ran out of guesses before guessing the whole word
    else
    {
        printf("\n\nGame over, you have run out of attempts. The correct word was: coding");
    } //end lose else


    return 0;

} //end main()