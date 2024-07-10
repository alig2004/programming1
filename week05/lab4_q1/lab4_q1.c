/*
Program: Program to ask the user for a character and tell them if its a vowel or not
Author: Alison Gleeson
Date: 17/10/2023
*/

#include <stdio.h>
int main()
{
    char letter = '0';

    //get users letter
    printf("Please enter a letter:\n");
    scanf("%c", &letter);

    while(getchar() != '\n');

    //using the switch statement
    switch(letter)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        {
            printf("Your letter is a vowel!");

            break;
        }//end case
        
        case ' ':
        case '\n':
        {
            printf("Invalid input, please run again");

            break;
        }

        default:
        {
            printf("Your letter is a consonant!");

            break;
        }//end default
    }//end switch

    return 0;
}