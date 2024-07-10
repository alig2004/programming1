/*
Program: Program to get a user input between 1 and 5 and display all numbers between 1 and 20 that it divides evenly
Author: Alison Gleeson
Date: 24/10/2023
*/

#include <stdio.h>
int main()
{
    int user_val = 0;
    int result = 0;
    int i = 1;

    printf("Please enter a number between 1 and 5: ");
    scanf("%d", &user_val);

    while (user_val <1 || user_val > 5)
    {
        printf("Invalid number. Please enter a different number: ");
        scanf("%d", &user_val);
    }

    while (i<21)
    {
        if (i % user_val == 0)
        {
            printf("\n%d is divisible by %d\n", i, user_val);
        }

        i = i + 1;
    }

    return 0;
}