/*
Program: Use a function to calculate the average of 3 numbers taken from main(), find the average and return it to main() to be printed
Author: Alison Gleeson
Date: 06/02/2024
*/

#include <stdio.h>

#define SIZE 3

float avg(float, float, float);


int main()
{
    float num1, num2, num3 = 0;
    float average = 0;


    //getting the numbers
    printf("Please enter 3 numbers:\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);


    //calling the avg() to get the average of the numbers
    average = avg(num1, num2, num3);

    
    //displaying the average calculated by avg()
    printf("\nThe average of %.3f, %.3f and %.3f is %.3f", num1, num2, num3, average);


    return 0;
}


//function to calculate the average of the users numbers
float avg(float a, float b, float c)
{
    float sum = 0;
    float avg = 0;

    sum = a + b + c;
    avg = sum/SIZE;

    return avg;
}