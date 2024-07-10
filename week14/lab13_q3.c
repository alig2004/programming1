/*
Program: Use a function to find the highest of 3 numbers and return this number back to main() to be displayed
Author: Alison Gleeson
Date: 06/02/2024
*/

#include <stdio.h>

int high(int, int, int);

int main()
{
    int num1, num2, num3 = 0;
    int highest = 0;


    //getting the numbers
    printf("Please enter 3 numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);


    //calling high() to get the highest
    highest = high(num1, num2, num3);


    //printing the highest
    printf("\nThe highest number is %d", highest);


    return 0;
}


//function to find the highest of 3 numbers and return it to main()
int high(int a, int b, int c)
{
    int temp = 0;
    
    //a < b < c - c is highest

    if (b<a)
    {
        temp = b;
        b = a;
        a = temp;
    }

    if (c<a)
    {
        temp = c;
        c = a;
        a = temp;
    }

    if (c<b)
    {
        temp = b;
        b = c;
        c = temp;
    }
    

    return c;
}