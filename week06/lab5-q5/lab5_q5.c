/*
Program: Program to display all even numbers from 1-100, separated by commas
Author: Alison Gleeson
Date: 24/10/2023
*/

#include <stdio.h>
int main()
{
    int i = 1;

    while (i<101)
    {
        if (i%2 == 0)
        {
            printf("%d, ", i);
        }

        i = i + 1;
    }

    return 0;
}