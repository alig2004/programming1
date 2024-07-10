/*
Program: Get 2 user inputted strings, compare to see if they're the same and display an appropriate message depending on the outcome
Author: Alison Gleeson
Date: 27/02/2024
*/


#include <stdio.h>
#include <string.h>

#define SIZE 21


int main()
{
    char firstWord[SIZE] = " ";
    char secondWord[SIZE] = " ";
    int result = 0;


    //getting users words
    printf("Please enter 2 words:\n");
    fgets(firstWord, SIZE-1, stdin);
    fgets(secondWord, SIZE-1, stdin);


    //calling strcmp() to compare the users words
    result = strcmp(firstWord, secondWord);

    //if words are the same
    if (result == 0)
    {

        printf("\nYour words are the same");

    } //end if
    //if words aren't the same
    else
    {

        printf("\nYour words aren't the same");

    } //end else

    return 0;

}