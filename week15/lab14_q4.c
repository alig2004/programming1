/*
Program: Program that uses a function to multiply all elements in the array by 2, returns them to main() and displays them
Author: Alison Gleeson
Date: 14/02/2024
*/

#include <stdio.h>

#define SIZE 5

void multiply(int[]);


int main()
{
    int arr[SIZE] = {0};
    int i;


    //getting elements of the array
    printf("Please enter %d numbers:\n", SIZE);
    for (i=0; i<SIZE; i++)
    {

        scanf("%d", &arr[i]);

    } //end for


    //calling multiply()
    multiply(arr);


    //displaying the array
    printf("\nThe array now contains:\n");
    for (i=0; i<SIZE; i++)
    {

        printf("%d\n", arr[i]);

    } //end for

    return 0;

} //end main


//finding the highest number in the array
void multiply(int arr[])
{
    int i;

    //finding the highest
    for (i=0; i<SIZE; i++)
    {

        arr[i] = arr[i] * 2;

    } //end for

} //end multiply()