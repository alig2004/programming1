/*
Program: Create 2 floats, enter their values via scanf, and using pointers, print the variables addresses, print the pointer addresses, point the pointers at the variables, print the pointers contents and print the content of the pointers addresses
Author: Alison Gleeson
Date: 05/12/2023
*/

#include <stdio.h>

int main()
{
    float input1 = 0;
    float input2 = 0;
    float *ptr1;
    float *ptr2;

    printf("Please enter a number for input1 and input 2:\n");
    scanf("%f", &input1);
    scanf("%f", &input2);

    //part 1 - print the addresses of input1 and input2
    printf("\nThe address of input1 is %p", &input1);
    printf("\nThe address of input2 is %p", &input2);

    //part 2 - print the addresses of ptr1 and ptr2
    printf("\n\nThe address of ptr1 is %p", &ptr1);
    printf("\nThe address of ptr2 is %p", &ptr2);

    //part 3 - pointing ptr1 and ptr2 at input1 and input2 and printing the contents of the pointers
    ptr1 = &input1;
    ptr2 = &input2;

    printf("\n\nThe contents of ptr1 is %p", ptr1);
    printf("\nThe contents of ptr1 is %p", ptr2);

    //part 4 - print the contents of the addresses stored in ptr1 and ptr2 using the dereference operator
    printf("\n\nThe contents of the address within ptr1 are %f", *ptr1);
    printf("\nThe contents of the address within ptr2 are %f", *ptr2);

    return 0;
}