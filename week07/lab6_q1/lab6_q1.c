/*
Program:Program that uses an array to enter 5 integer numbers. Copy the contents of this array into another array
Author: Alison Gleeson
Date: 07/11/2023
*/

#include <stdio.h>

#define SIZE 5

int main()
{
    int list1[SIZE];
    int list2[SIZE];
    int i;

    printf("Please enter %d numbers:\n", SIZE);

    //loop to get user numbers and assign to array
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &list1[i]);
    }

    printf("\nYou numbers were:\n");

    //loop to assign numbers to new array and print them
    for(i=0; i<SIZE; i++)
    {
        list2[i] = list1[i];
        printf("%d\n", list2[i]);
    }
    return 0;
}
