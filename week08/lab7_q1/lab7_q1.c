/*
Program: Program to find a specific element in a given array
Author: Alison Gleeson
Date: 14/22/2023
*/

#include <stdio.h>

#define SIZE 10

int main()
{
    int arr[SIZE];
    int i;

    for (i = 0; i < 10; i++)
    {
        arr[i] = 9 - i;
        printf("\n%d", arr[i]);
    }

    // Display the contents of arr[8]
    printf("\nThe 8th element is %d\n\n", arr[8]);

    for (i = 0; i < 10; i++)
    {
        arr[i] = arr[ arr[i] ];
        printf("\n%d", arr[i]);
    }

    // Display the contents of arr[8]
    printf("\nThe 8th element is %d\n\n", arr[8]);

    return 0;
}