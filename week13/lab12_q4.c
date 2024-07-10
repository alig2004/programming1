/*
Program: Program to calculate and display the sum and average of 3 user-inputted numbers using 2 functions 
Author: Alison Gleeson
Date: 30/01/2024
*/

#include <stdio.h>


#define SIZE 3


void sum(int, int, int);
void average(int);


int main()
{
    int num1, num2, num3 = 0;
    int i = 0;

    //getting the numbers
    printf("Please enter %d numbers:\n", SIZE);
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);


    //calling sum()
    sum(num1, num2, num3);


    return 0;
}//end main()


//function sum() to find the sum of the integers
void sum(int a, int b, int c)
{
    int total = 0;

    total = a + b + c;

    average(total);
}//end sum()


//function average() to find the average of the integers
void average(int x)
{
    float avg = 0;

    avg = (float)x/SIZE;

    printf("\n\nThe average of your numbers is %.3f", avg);
}//end average()