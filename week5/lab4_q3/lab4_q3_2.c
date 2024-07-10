/*
Program: Program to check if user inputted lengths could form a valid triangle
Author: Alison Gleeson
Date: 17/10/2023
*/

#include <stdio.h>
int main()
{
    float side1 = 0;
    float side2 = 0;
    float side3 = 0;

    //get side lengths
    printf("Please enter the length of each side of the triangle:\n");
    scanf("%f%f%f", &side1, &side2, &side3);

    //check if sum of 2 sides is greater than the third
    if ((side1 + side2)>side3 && (side1 + side3)> side2 && (side2 + side3)>side1)
    {
        printf("This is a valid triangle");
    }//end if
    else
    {
        printf("This is not a valid triangle");
    }//end else

    return 0;
}