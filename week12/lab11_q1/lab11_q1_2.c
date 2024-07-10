/*
Program: Given arrays of litres and miles, write a program to calculate and display the value of each element of another array (mpl) using pointer notation only
Author: Alison Gleeson
Date: 12/12/2023
*/

#include <stdio.h>

#define SIZE 5

int main()
{
    float litres[SIZE] = {11.5, 11.21, 12.7, 12.6, 12.4};
    float miles[SIZE] = {471.5, 358.72, 495.3, 453.6, 421.6};
    int mpl[SIZE] = {0};
    int i;

    //for loop to calculate and assign the values of the elements in mpl
    for (i=0; i<SIZE; i++)
    {
        *(mpl + i) = *(miles + i) / *(litres + i);

    }//end for

    
    //for loop to print the values of the elements in mpl
    for (i=0; i<SIZE; i++)
    {
        printf("%d miles per litre\n", *(mpl + i));

    }//end for

    
    return 0;
}