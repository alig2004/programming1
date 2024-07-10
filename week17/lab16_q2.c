/*
Program: Read a sentence from standard input and (a) calculates the number of character in the sentence and (b) appends the sentence onto the string "My sentence is "
Author: Alison Gleeson
Date: 27/02/2024
*/


#include <stdio.h>
#include <string.h>

#define SIZE 30
#define EXTRA 49


int main()
{
    char sentence[SIZE] = " ";
    char full[EXTRA] = "Your sentence is: ";
    int length = 0;


    //getting the sentence
    printf("Please enter a short sentence:\n");
    fgets(sentence, SIZE-1, stdin);


    //finding the length of the sentence
    length = strlen(sentence);


    //concatenating the sentence to full
    strcat(full, sentence);


    //displaying the length of the sentence and the concatenated full
    printf("\nYour sentence is %d characters\n", length);
    puts(full);

    
    return 0;
}