/*
Program: Program to read a number from 1 to 7 and print its assigned day
Author: Alison Gleeson
Date: 17/10/2023
*/

#include <stdio.h>
int main()
{
    int num = 0;

    //get users number
    printf("Please enter a number from 1 to 7\n");
    scanf("%d", &num);

    //begin switch
    switch (num)
    {
        case 1:
        {
            printf("Sunday");

            break;
        }//end case

        case 2:
        {
            printf("Monday");

            break;
        }//end case

        case 3:
        {
            printf("Tuesday");

            break;
        }//end case

        case 4:
        {
            printf("Wednesday");

            break;
        }//end case

        case 5:
        {
            printf("Thursday");

            break;
        }//end case

        case 6:
        {
            printf("Friday");

            break;
        }//end case

        case 7:
        {
            printf("Saturday");

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