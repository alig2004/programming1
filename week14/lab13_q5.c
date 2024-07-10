/*
Program: Demonstrating pass by value
Author: Alison Gleeson
Date: 06/02/2024
*/

#include <stdio.h>

int passval(int);

int main()
{
    int my_int = 1;
    int passed = 1;

    printf("my_int = %d\npassed = %d", my_int, passed);

    passed = passval(my_int);

    printf("\n\nmy_int = %d\npassed = %d", my_int, passed);

    return 0;
}


//function increment an int by 2
int passval(int num)
{
    num = num + 2;
    
    return num;
}