/*
Program: Input numbers into two 1D arrays of 5 elements and display the product of corresponding elements
Author: Alison Gleeson
Date: 14/11/2023
*/

#include <stdio.h>

#define SIZE 5

int main()
{
    int arr1[SIZE];
    int arr2[SIZE];
    int i;

    printf("Please enter %d numbers into the first array:\n", SIZE);

    //inputting to the first array
    for (i=0; i<SIZE; i++)
    {
        scanf("%d", &arr1[i]);
    }

    //inputting to the second array
    printf("\nPlease enter %d numbers into the second array:\n", SIZE);
    for (i=0; i<SIZE; i++)
    {
        scanf("%d", &arr2[i]);
    }

    //printing products of corresponding elements
    for (i=0; i<SIZE; i++)
    {
        printf("\n%d x %d = %d", arr1[i], arr2[i], (arr1[i]*arr2[i]));
    }

    return 0;
}