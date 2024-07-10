/*
Program: Testing how strings initialised differ depending on whether they are initialised character by character or as literals
Author: Alison Gleeson
Date: 20/02/2024
*/

#include <stdio.h>

int main()
{
    char arr[] = "Hello!";
    char str[] = {'h', 'e', 'l', 'l', 'o', '!', '\0'};

    //if no null character is present at the end of str[], both strings will be displayed

    printf("%s", str);

    return 0;
}