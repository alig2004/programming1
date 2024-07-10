/*
Program: Program to get a user input, divide it by 2 if it's even, multiply by 3 and add 1 if it's odd, and display the final value and number of steps
Author: Alison Gleeson
Date: 24/10/2023
*/

#include <stdio.h>
int main()
{
    int user_val = 0;
    int i = 0;

    printf("Enter a positive whole number: ");
    scanf("%d", &user_val);
    printf("Value entered is %d", user_val);

    //if input is less than 1
    if (user_val < 1)
    { //start if
        printf("\nError. Please enter a different number: ");
        scanf("%d", &user_val);
        printf("\nValue entered is %d", user_val);
    }//end if

    //if input is greater than 1
    if (user_val > 1)
    { //start else if

        while (user_val != 1)
        { //start while

            if (user_val%2 == 0)
            { //start inner if
                user_val = user_val/2;
                i = i + 1;
                printf("\nNext value is %d", user_val);
            }//end inner if

            else
            { //start else
                user_val = (user_val * 3) + 1;
                i = i + 1;
                printf("\nNext value is %d", user_val);
            } //end else

        } //end while
    } //end if

    printf("\nFinal value is %d, number of steps is %d", user_val, i);

    return 0;
}