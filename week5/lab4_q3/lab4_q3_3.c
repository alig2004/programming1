/*
Program: Program to read a single numeral from the keyboard and displays its value as a word
Author: Alison Gleeson
Date: 17/10/2023
*/

#include <stdio.h>
int main()
{
    int num = 0;

    //get users number
    printf("Please enter a number from 0 to 9\n");
    scanf("%d", &num);

    //begin switch
    switch (num)
    {
        case 0:
        {
            printf("Zero");

            break;
        }//end case

        case 1:
        {
            printf("One");

            break;
        }//end case

        case 2:
        {
            printf("Two");

            break;
        }//end case

        case 3:
        {
            printf("Three");

            break;
        }//end case

        case 4:
        {
            printf("Four");

            break;
        }//end case

        case 5:
        {
            printf("Five");

            break;
        }//end case

        case 6:
        {
            printf("Six");

            break;
        }//end case

        case 7:
        {
            printf("Seven");

            break;
        }//end case

        case 8:
        {
            printf("Eight");

            break;
        }//end case

        case 9:
        {
            printf("Nine");

            break;
        }//end case

        default:
        {
            printf("Invalid input, please try again");

            break;
        }//end default
    }//end switch

    return 0;
}