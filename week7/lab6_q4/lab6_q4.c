/*
Program: Program to make an array of 4 user inputs, display them in order and then display them with the 1st and 2nd numbers swapped and the 3rd and 4th numbers swapped
Author: Alison Gleeson
Date: 07/11/2023
*/

#include <stdio.h>

#define SIZE 4

int main()
{
    int list[SIZE];
    int i, j;
    int temp = 0;

    printf("Please enter %d integers:\n", SIZE);

    //for loop to assign user input to array
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &list[i]);
    }

    //for loop to swap the 1st element with the 2nd element and the 3rd element with the 4th element
    for(i=0; i<SIZE; i++)
    {//begin for loop

        //if iteration is odd, swap with previous element
        if (i%2 != 0)
        {//begin if 

            temp = list[i];
            list[i] = list[i-1];
            list[i-1] = temp;

        }//end if

    }//end for loop

    for(i=0; i<SIZE; i++)
    {
        printf("\n%d", list[i]);
    }

    return 0;
}