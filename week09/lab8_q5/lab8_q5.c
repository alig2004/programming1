/*
Program: Experiment with assigning pointer values
Author: Alison Gleeson
Date: 21/11/2023
*/

#include <stdio.h>

int main()
{
    int var1;
    int *ptr;

    ptr = &var1;

    var1 = 7;

    printf("%d", *ptr);

    printf("\n%p", ptr);

    ptr++;

    printf("\n%p", ptr);

    *ptr = 10;

    printf("\n%d", *ptr);

    return 0;
}