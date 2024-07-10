/* 
Program: Program to convert temperature in fahrenheit to celsius
Author: Alison Gleeson
Date: 10/10/2023
*/

#include <stdio.h>

int main()
{
    float temp_f = 0;
    float temp_c = 0;

    //get temp in fahrenheit
    printf("Enter a temperature in degrees Fahrenheit:\n");
    scanf("%f", &temp_f);

    //convert to celsius
    temp_c = ((temp_f)-32.0)*(5.0/9.0);

    //print temp in celsius 
    printf("It is %f degrees celsius", temp_c);

    return 0;
}