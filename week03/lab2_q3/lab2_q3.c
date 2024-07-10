/*
Program: Program to calculate and display remainders of various arithmetic operations
Author: Alison Gleeson
Date: 03/10/2023
*/

#include <stdio.h>
int main()
{
    int op1;
    int op2;
    int op3;
    int op4;
    int op5;
    int op6;

    op1 = 2%2;
    printf("%d\n", op1);

    op2 = 3%2;
    printf("%d\n", op2);

    op3 = 5%2;
    printf("%d\n", op3);

    op4 = 7%3;
    printf("%d\n", op4);

    op5 = 100%33;
    printf("%d\n", op5);

    op6 = 100%7;
    printf("%d", op6);

    return 0;
}