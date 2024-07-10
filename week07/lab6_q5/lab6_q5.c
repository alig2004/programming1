/*
Program: Program to get 5 user inputted characters in an array and display it#
Author:Alison Gleeson
Date: 07/11/2023
*/

#include <stdio.h>

#define SIZE 5

int main()
{
    char list[SIZE];
    int i;

    printf("Please enter %d characters:\n", SIZE);

    for(i=0; i<SIZE; i++)
    {
        while(getchar() != '\n');
        
        scanf("%c", &list[i]);
    }

    for(i=0; i<SIZE; i++)
    {
        printf("\n%c", list[i]);
    }
}