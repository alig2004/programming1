/*
Program: Program to get an array with 5 user inputs and make another array with the same numbers in reverse
Author: Alison Gleeson
Date: 07/11/2023
*/

#include <stdio.h>

#define SIZE 5

int main()
{
    int list[SIZE];
    int list_reverse[SIZE];
    int i, j;
    int temp = 0;

    printf("Please enter %d integers:\n", SIZE);

    //for loop to get user inputs
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &list[i]);
    }

    //for loop to assign list integers to list_reverse in reverse order
    for(i=0, j=(SIZE-1); i<SIZE; i++, j--)
    {
        temp = list[i];
        
        list_reverse[j] = temp;

    }

    //for loop to print list-reverse
    for(j=0; j<SIZE; j++)
    {
        printf("\n%d", list_reverse[j]);
    }

    return 0;
}