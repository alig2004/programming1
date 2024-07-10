/*
Program: Use a function to check if a number is even or odd, returning 1 if even or 0 if odd
Author: Alison Gleeson
Date: 06/02/2024
*/

#include <stdio.h>

int even_odd(int);

int main()
{
    int num = 0;
    int result = 0;

    //getting the number
    printf("Please enter a number:\n");
    scanf("%d", &num);


    //calling evenORodd()
    result = even_odd(num);


    //printing result
    if (result == 1)
    {
        printf("\n\nYour number is even");
    }

    else 
    {
        printf("\n\nYour number is odd");
    }

    
    return 0;
}


//function to check if a number is even (1) or odd (0)
int even_odd(int number)
{
    //if number is even
    if (number%2 == 0)
    {
        return 1;
    }

    //else number is odd
    else
    {
        return 0;
    }
}