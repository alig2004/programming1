/*
Program: Program to input 3 float numbers and calculate their sum and average to 3 decimal points
Author: Alison Gleeson
Date: 10/10/2023
*/

#include <stdio.h>

int main()
{ 
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;
    float sum = 0;
    float avg = 0;

    //getting the numbers
    printf("Please enter 3 float numbers:\n");
    scanf("%f%f%f", &num1, &num2, &num3);

    //getting sum of the numbers
    sum = num1+num2+num3;

    //getting average of the numbers
    avg = sum/3;

    //printing results
    printf("The sum of your numbers is %.3f\nThe average of your numbers is %.3f", sum, avg);

    return 0;
}