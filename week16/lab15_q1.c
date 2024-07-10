/*
Program: Checking what specific print statements display
Author: Alison Gleeson
Date: 20/02/2024
*/

#include <stdio.h>

int main()
{
    //(a)
    printf("%5s", "abcd");
    //displays " abcd"

    printf("\n\n");

    //(b)
    printf("%5s", "abcdef");
    //displays "abcdef"

    printf("\n\n");

    //(c)
    printf("%-5s", "abc");
    //displays "abc"

    printf("\n\n");

    //(d)
    printf("%5.2s", "abcde");
    //displays "   ab"

    printf("\n\n");

    //(e)
    printf("%-5.2s", "abcde");
    //displays "ab"

    return 0;
}