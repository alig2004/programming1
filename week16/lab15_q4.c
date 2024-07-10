/*
Program: Checking the output of two program segments
Author: Alison Gleeson
Date: 20/02/2024
*/

#include <stdio.h>
#include <string.h>

int main()
{
    //segment 1
    /*
    char *p = "abcd";
    while (*p)
    {
        putchar(*p++);
    }
    */
    //displays "abcd"

    //segment 2
    /*
    char *text = "abcd";
    char *p = text;
    p += strlen(p) - 1;
    while (text <= p)
    {
        puts (p--);
    }
    */
    //displays 
    /* 
    d
    cd
    bcd
    abcd
    */
}