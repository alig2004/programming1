/*
Program: Program that uses a function to find the highest number in an array of 5 numbers, returns it to main() and displays it
Author: Alison Gleeson
Date: 14/02/2024
*/

#include <stdio.h>

#define SIZE 5

int high(int[]);


int main()
{
    int arr[SIZE] = {0};
    int i;
    int highest = 0;


    //getting elements of the array
    printf("Please enter %d numbers:\n", SIZE);
    for (i=0; i<SIZE; i++)
    {

        scanf("%d", &arr[i]);

    } //end for


    //calling high()
    highest = high(arr);


    //displaying the highest number
    printf("\nThe highest number is %d", highest);

    return 0;

} //end main


//finding the highest number in the array
int high(int arr[])
{
    int i;
    int highest = arr[0];

    //finding the highest
    for (i=1; i<SIZE; i++)
    {

        if (highest < arr[i])
        {

            highest = arr[i];

        } //end if

    } //end for

    return highest;
}