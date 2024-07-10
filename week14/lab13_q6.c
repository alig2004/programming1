/*
Program: Demonstrating pass by reference
Author: Alison Gleeson
Date: 06/02/2024
*/

#include <stdio.h>

int passref(int *);

int main()
{
    int my_int = 1;
    int passed = 1;

    printf("my_int = %d\npassed = %d", my_int, passed);

    passed = passref(&my_int);

    printf("\n\nmy_int = %d\npassed = %d", my_int, passed);

    return 0;
}


//function increment an int by 2
int passref(int *num)
{
    *num = *num + 2;
    
    return *num;
}