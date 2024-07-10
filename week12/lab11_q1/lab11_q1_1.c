/*
Program: Program to replace all the blank element characters in a given array with an underscore, using pointer notation only
Author: Alison Gleeson
Date: 12/12/2023
*/

#include <stdio.h>

#define SIZE 8

int main()
{
    char chars[SIZE] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};
    int i;

    //printing the array as is
    for (i=0; i<SIZE; i++)
    {
        printf("%c", *(chars + i));
    }

    //changing any spaces for underscores
    for (i=0; i<SIZE; i++)
    {
        //if the element is a space, replace with an underscore
        if (*(chars + i) == ' ')
        {
            *(chars + i) = '_';

        }//end if

    }//end for

    //printing the array after changes
    printf("\n\n");
    for (i=0; i<SIZE; i++)
    {
        printf("%c", *(chars + i));
    }

    return 0;    
}