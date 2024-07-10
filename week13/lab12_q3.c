/*
Program: Program to find the highest and lowest of 3 values using a function and display them
Author: Alison Gleeson
Date: 30/01/2024
*/

#include <stdio.h>


void HighLow(int, int, int);


int main()
{
    int num1, num2, num3 = 0;

    //getting num1
    printf("Please enter a number:\n");
    scanf("%d", &num1);

    //getting num2
    printf("\nPlease enter another number:\n");
    scanf("%d", &num2);

    //getting num3
    printf("\nPlease enter a final number:\n");
    scanf("%d", &num3);


    //calling HighLow()
    HighLow(num1, num2, num3);


    return 0;
}


//function to find and display the highest and lowest numbers
void HighLow(int x, int y, int z)
{
    int temp = 0;

    //rearranging variables so x < y < z
    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }

    if (x > z)
    {
        temp = x;
        x = z;
        z = temp;
    }

    if (y > z)
    {
        temp = y;
        y = z;
        z = temp;
    }


    //printing the highest and lowest values
    printf("The highest value is %d", z);
    printf("\nThe lowest value is %d", x);

}//end HighLow()