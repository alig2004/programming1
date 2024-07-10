/* 
Program: Checking the output of incorrect code and correcting it
Author: Alison Gleeson
Date: 21/11/2023
*/

#include <stdio.h>

int main()
{
    int var1 = 1;
    int *ptr;

    ptr = &var1;

    printf("The address of var1 is %p", &var1);
    printf("\nptr contains %p", &ptr);
    printf("\n*ptr contains %d", *ptr);

    return 0;
}