/*
Program: Initialise 4 variables (num1, char1 and 2 pointers), point ptr1 at num1 and ptr2 at char1, print the contents and address of both variables, the contents of both pointers and the contents of the addresses using the dereference operator
Author: Alison Gleeson
Date: 05/12/2023
*/

#include <stdio.h>

int main()
{
    int num1 = 5;
    char char1 = 'F';
    int *ptr1;
    char *ptr2;

    //pointing the pointers
    ptr1 = &num1;
    ptr2 = &char1;

    //part a - printing the contents and addresses of the variables
    printf("The content within num1 is %d and the address is %p", num1, &num1);
    printf("\nThe content within char1 is %c and the address is %p", char1, &char1);

    //part b - printing the contents of ptr1 and ptr2
    printf("\n\nThe address at ptr1 is %p", ptr1);
    printf("\nThe address at ptr2 is %p", ptr2);

    //part c - printing the contents of the addresses of ptr1 and ptr2 using the dereference operator
    printf("\n\nThe content at the address within ptr1 is %d", *ptr1);
    printf("\nThe content at the address within ptr2 is %c", *ptr2);

    //extra - printing the addresses of ptr1 and ptr2
    printf("\n\n%p is the memory address of ptr1", &ptr1);
    printf("\n%p is the memory address of ptr2", &ptr2);

    return 0;
}