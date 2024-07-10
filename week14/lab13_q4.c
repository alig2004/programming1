/*
Program: Use a function to find the most common character of 3 characters read in from main() and return it to main() to display it
Author: Alison Gleeson
Date: 06/02/2024
*/

#include <stdio.h>

char count(char, char, char);

int main()
{
    char ch1, ch2, ch3 = ' ';
    char most_common = ' ';

    
    //getting users characters
    printf("Please enter 3 characters:\n");
    scanf("%c", &ch1);
    while (getchar() != '\n');
    scanf("%c", &ch2);
    while (getchar() != '\n');
    scanf("%c", &ch3);


    //calling count()
    most_common = count(ch1, ch2, ch3);


    //displaying the most common character
    printf("\nThe most common character is %c", most_common);


    return 0;
}


//count() finds the most commonly occurring character 
char count(char x, char y, char z)
{
    //if x is the most common character
    if (x == y || x == z)
    {
        return x;
    }

    //else if y is the most common
    else 
    {
        return y;
    }
}