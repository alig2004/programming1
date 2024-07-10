/*
Program: Ask the user to enter 2 integers, store these in variables called num1 and num2 and, using pointers only, find the sum of these numbers, store them in a third variable called sum, and display the variable stored within sum
Author: Alison Gleeson
Date: 05/2/12/2023
*/

#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    int *ptr1;
    int *ptr2;
    int *ptrSum;

    //part 1 - getting user inputs
    printf("Please enter 2 integers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    //part 2 - pointing the pointers
    ptr1 = &num1;
    ptr2 = &num2;
    ptrSum = &sum;

    //part 3 - finding the sum using the pointers
    *ptrSum = (*ptr1) + (*ptr2);

    //part 4 - printing the sum
    printf("\n\nThe sum of your numbers is %d", *ptrSum);

    return 0;
}