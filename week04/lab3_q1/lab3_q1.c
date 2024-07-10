/*
Program: Program to input and output 3 integers
Author: Alison Gleeson
Date: 10/10/2023
*/

#include <stdio.h>

int main()
{ 
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Please enter three integers\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("Your numbers were\n%d\n%d\n%d", num1, num2, num3);

    return 0;
}