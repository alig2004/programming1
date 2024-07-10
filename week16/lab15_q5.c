/*
Program: Read in the users name and display it with a space between each letter (e.g. John will display J o h n)
Author: Alison Gleeson
Date: 20/02/2024
*/

#include <stdio.h>

#define SIZE 21


int main()
{
    char name[SIZE];
    char spaced[SIZE];
    int i = 0;


    //getting users name
    printf("Please enter your first name:\n");
    fgets(name, SIZE-1, stdin);


    //transferring name from name[] to spaced[] and adding spaces between letters
    for (i=0; i<SIZE; i++)
    {
        spaced[2*i] = name[i]; //even numbered index in second array gets a letter

        spaced[2*i + 1] = ' '; //odd numbered index in second array gets a space
    }


    printf("\nHello ");
    puts(spaced);


    return 0;
}