/*
Program: Checking the output of different printf statements
Author: Alison Gleeson
Date: 20/02/2024
*/

#include <stdio.h>

int main()
{
    char *text = "some text";

    //(a) 
    printf("%s\n", text);
    //displays "some text"

    //(b)
    printf("%c\n", *text);
    //displays "s"

    //(c)
    printf("%c\n", *"more text");
    //displays "m"

    //(d)
    printf("%c\n", *(text+1));
    //displays "o"

    //(e)
    printf("%s\n", text+1);
    //displays "ome text"

    //(f)
    printf(text);
    //displays "some text"

    //(g)
    //*(text + 4) = '\0';
    //printf("\n%s\n", text);
    //displays nothing

    //(h)
    printf("\n%c", "text"[2]);
    //displays "x" (when line 38 is commented out)

    //(i)
    printf("\n%s", "text" + 2);
    //displays "xt"

    return 0;
}