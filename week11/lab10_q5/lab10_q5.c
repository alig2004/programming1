/*
Program: Using pointer notation, create 2 float arrays containing 3 elements each, enter values into the first, copy them into the second and display both
Author: Alison Gleeson
Date: 05/12/2023
*/

//pointer notation: array_name[i] == *(array_name + i)

#include <stdio.h>

#define SIZE 3

int main()
{
    float arr1[SIZE];
    float arr2[SIZE];
    int i;

    //entering values into arr1
    printf("Please enter %d numbers:\n", SIZE);

    for (i=0; i<SIZE; i++)
    {
        scanf("%f", &*(arr1 + i));
    } //end for


    //copying the contents of arr1 into arr2
    for (i=0; i<SIZE; i++)
    {
        *(arr2 + i) = *(arr1 + i);
    } //end for


    //displaying the contents of arr1
    printf("\nHere is the contents of the first array:\n");
    for (i=0; i<SIZE; i++)
    {
        printf("%.3f\n", *(arr1 + i));
    } //end for


    //displaying the contents of arr2
    printf("\nHere is the contents of the second array:\n");
    for (i=0; i<SIZE; i++)
    {
        printf("%.3f\n", *(arr2 + i));
    } //end for


    return 0;
}