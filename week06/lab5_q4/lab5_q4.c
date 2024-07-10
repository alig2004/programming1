/*
Program: Program to prints 1-10 on separate lines and displays "This number is three" and "This number is 7" on those numbers
Author: Alison Gleeson
Date: 24/10/2023
*/

#include <stdio.h>
int main()
{
    int i = 1;

    while (i<11)
    {
        printf("%d\n", i);

        if (i == 3)
        {
            printf("This is number is three\n");
        }

        if (i ==7)
        {
            printf("This number is seven\n");
        }

        i = i + 1;
    }

    return 0;
}