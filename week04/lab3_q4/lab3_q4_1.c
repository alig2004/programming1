/*
Program: Program to display 3 float numbers with precision formatting
Author: Alison Gleeson
Date: 10/10/2023
*/

#include <stdio.h>

int main()
{ 
    float v1 = 5;
    float v2 = -4.5;
    float v3 = 11.25;

    printf("v1 = %.0f\tv2 = %.1f\tv3 = %.2f", v1, v2, v3);

    return 0;
}