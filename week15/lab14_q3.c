/*
Program: Program to find the average of 5 numbers in an array using a function, return the average to main and display it
Author: Alison Gleeson
Date: 14/02/2024
*/


#include <stdio.h>

#define SIZE 5

float avg(int[]);


int main()
{
    int arr[SIZE] = {0};
    int i;
    float average = 0;


    //getting the elements of the array
    printf("Please enter %d numbers:\n", SIZE);
    for (i=0; i<SIZE; i++)
    {

        scanf("%d", &arr[i]);

    } //end for


    //getting the average using avg()
    average = avg(arr);


    //displaying the average to 3 decimal places
    printf("\nThe average of your numbers is %.3f", average);


    return 0;

} //end main()


//getting the average of the array elements
float avg(int arr[])
{
    float average = 0;
    int sum = 0;
    int i;


    //adding all elements together
    for (i=0; i<SIZE; i++)
    {

        sum = sum + arr[i];

    } //end for


    //finding the average
    average = (float)sum/SIZE;


    return average;

} //end avg()