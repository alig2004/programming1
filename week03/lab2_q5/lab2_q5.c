/*
Program: Program to calculate and display the answers to arithmetic operations
Author: Alison Gleeson
Date: 03/10/2023
*/

#include <stdio.h>
int main()
{
    int add;
    int sub;
    int mult;
    float div;
    int mod;

    add = 15+10;
    sub = 15-10;
    mult = 15*10;
    div = 15.0/10;
    mod = 15%3;

    printf("The answers are %d, %d, %d, %f and %d", add, sub, mult, div, mod);
}