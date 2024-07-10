/*
Program: Program to print 1-10 in descending order using a while loop
Author: Alison Gleeson
Date:24/10/2023
*/

#include <stdio.h>
int main()
{
    int i = 10;

    while (i>0)
    { //start while
        if (i == 1)
        { //start if
            printf("%d", i);
        } //end if

        else
        { //start else
            printf("%d, ", i);
        } //end else

        i = i - 1;

    } //end while

    return 0;
}