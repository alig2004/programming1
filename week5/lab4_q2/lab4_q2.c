/*
Program: Program to check and tell a user if an integer is odd or even
Author: Alison Gleeson
Date: 17/10/2023
*/

#include <stdio.h>
int main()
{
    int num = 0;

    //get users integer
    printf("Please enter an integer between 1 and 100:\n");
    scanf("%d", &num);

    //if number is between 1 and 100
    if (num>=1 && num<=100)
    {
        //if number is even
        if (num%2 == 0)
        {
            printf("Number %d is even", num);

        }//end inner if
        //if number is odd
        else
        {
            printf("Number %d is odd", num);
        }//end else
    }//end if
    //if number is outside of range
    else
    {
        printf("Invalid number, please run again");
    }//end else

    return 0;
}