/*
Program: Get 2 user inputted strings, compare to see if they're the same, concatenate the first word to "First word entered is ", calculate the length of the concatenated string and display that as well as an appropriate message depending on whether the words match
Author: Alison Gleeson
Date: 27/02/2024
*/


#include <stdio.h>
#include <string.h>

#define SIZE 21
#define SIZETWO 48


int main()
{
    char firstWord[SIZE] = " ";
    char secondWord[SIZE] = " ";
    char sentence[SIZETWO] = "The first word entered is ";
    int result = 0;
    int length = 0;


    //getting users words
    printf("Please enter 2 words:\n");
    fgets(firstWord, SIZE-1, stdin);
    fgets(secondWord, SIZE-1, stdin);

    
    //concatenating sentence and the first word and displaying it
    strcat(sentence, firstWord);
    puts(sentence);


    //finding the length of the concatenated string and displaying it
    length = strlen(sentence);
    printf("The above sentence is %d characters", length);


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