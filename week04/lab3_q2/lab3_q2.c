/* 
Program: Program to input and display two characters
Author: Alison Gleeson
Date: 10/10/2023
*/

#include <stdio.h>

int main()
{
    char user_c1 = ' ';
    char user_c2 = ' ';

    printf("Please enter 2 characters:\n");
    user_c1 = getchar();
    while(getchar() != '\n');
    user_c2 = getchar();

    printf("Your first character was\n");
    putchar(user_c1);
    printf("\nYour second character was\n");
    putchar(user_c2);

    return 0;
}