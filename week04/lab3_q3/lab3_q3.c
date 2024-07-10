/*
Program: Program to input 3 float numbers, displaying the first with 4 decimal places, the second with 2 and the third with none, each on separate lines
Author: Alison Gleeson
Date: 10/10/2023
*/

#include <stdio.h>

int main()
{ 
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;

    //getting user numbers
    printf("Please enter 3 float numbers\n");
    scanf("%f%f%f", &num1, &num2, &num3);

    //printing user numbers
    printf("\nYour numbers were\n%.4f\n%.2f\n%.0f", num1, num2, num3);

    return 0;
}