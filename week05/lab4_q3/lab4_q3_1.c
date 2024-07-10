/*
Program: Program to read in 2 integers and check if the first is divisible by the second
Author: Alison Gleeson
Date: 17/10/2023
*/

#include <stdio.h>
int main()
{
    int num1 = 0;
    int num2 = 0;

    //read in first number
    printf("Please enter an integer:\n");
    scanf("%d", &num1);

    while(getchar() != '\n');

    printf("Please enter another integer:\n");
    scanf("%d", &num2);

    //check if they are divisible
    if (num1%num2 == 0)
    {
        printf("%d is divisible by %d", num1, num2);
    }//end if
    else
    {
        printf("%d is not divisible by %d", num1, num2);
    }//end else

    return 0;
}