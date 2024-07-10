/*
Program: Program to find the sum of all the odd integers in the range 1-99
Author: Alison Gleeson
Date: 24/10/2023
*/

#include <stdio.h>
int main()
{
    int i = 1;
    int total = 0;

    while (i<100)
    {
        if (i%2 != 0)
        {
            total = total + i;
        }

        i = i + 1;
    }

    printf("%d", total);

    return 0;
}