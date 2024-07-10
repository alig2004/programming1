/*
Program: Modify the code of lab10_q1.c and declare a third pointer (ptr3) that points to an integer, try pointing it at char1, try printing the contents of ptr3 using the dereference operator and %c and %d
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
    int *ptr3;

    //pointing the pointers
    ptr1 = &num1;
    ptr2 = &char1;

    //q2 part 1 - pointing an int pointer at a char variable
    ptr3 = &char1;
    //result = compiles with an error saying "assignment from incompatible pointer type"

    //q1 part a - printing the contents and addresses of the variables
    printf("The content within num1 is %d and the address is %p", num1, &num1);
    printf("\nThe content within char1 is %c and the address is %p", char1, &char1);

    //q1 part b - printing the contents of ptr1 and ptr2
    printf("\n\nThe address at ptr1 is %p", ptr1);
    printf("\nThe address at ptr2 is %p", ptr2);

    //q1 part c - printing the contents of the addresses of ptr1 and ptr2 using the dereference operator
    printf("\n\nThe content at the address within ptr1 is %d", *ptr1);
    printf("\nThe content at the address within ptr2 is %c", *ptr2);

    //q1 extra - printing the addresses of ptr1 and ptr2
    printf("\n\n%p is the memory address of ptr1", &ptr1);
    printf("\n%p is the memory address of ptr2", &ptr2);

    //q2 part 2 - printing the contents of ptr3 with %c and %d
    printf("\n\nptr3 contains %d", *ptr3);
    printf("\nptr3 contains %c", *ptr3);
    //result = using %d will output 1350 (relevance still unknown) and %c will output F (contents of the only char within the program)

    return 0;
}