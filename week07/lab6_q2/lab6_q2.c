/*
Program: Program to get 3 user inputs in fahrenheit and display them and their corresponding temperature in celsius
Author: Alison Gleeson
Date: 07/11/2023
*/

#include <stdio.h>

#define SIZE 3

int main()
{
    float temp_far[SIZE];
    float temp_cel[SIZE];
    int i;

    printf("Please enter %d temperatures in fahrenheit:\n", SIZE);

    //for loop to get temps in fahrenheit
    for(i=0; i<SIZE; i++)
    {
        scanf("%f", &temp_far[i]);
    }

    printf("Your temperatures were:\n");

    //for loop to calculate celsius and output both temperatures
    for(i=0; i<SIZE; i++)
    {
        temp_cel[i] = (temp_far[i] - 32.0)*(5.0/9.0);
        printf("%.1f degrees fahrenheit and %.1f degrees celsius\n", temp_far[i], temp_cel[i]);
    }

    return 0;
}