/*
Program: Program to calculate display various sums and averages
Author: Alison Gleeson
Date: 03/10/2023
*/
#include <stdio.h>

int main()
{
    int sum1 = 0;
    float sum2 = 0;
    float avg = 0;


    sum1 = 1*2*3*4*5;
    printf("The sum of 1 to 5 is %d\n\n", sum1);

    sum2 = 1.0+1.1+1.2+1.3+1.4+1.5+1.6+1.7+1.8+1.9+2.0;
    avg = sum2/11;

    printf("The average of 1.0 to 2.0 is %f", avg);

    return 0;
}