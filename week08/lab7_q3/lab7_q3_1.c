/*
Program: Create an array of 15 numbers, display them all on separate lines, on one line separated by a space and on one line in reverse order
Author: Alison Gleeson
Date: 14/11/2023
*/

#include <stdio.h>

#define SIZE 15

int main()
{
    int arr[SIZE];
    int i;

    printf("Please enter %d numbers:\n", SIZE);

    //for loop to initialise array
    for (i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    //printing array on separate lines

    printf("\nYour array on separate lines:");
    for (i=0; i<SIZE; i++)
    {
        printf("\n%d", arr[i]);
    }

    //printing array on one line, separated by a single space
    printf("\n\nYour array on one line:\n");
    for (i=0; i<SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    //printing array in reverse order on one line, separated by a single space
    printf("\n\nYour array in reverse order on one line:\n");
    for (i=SIZE-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
}