/*
Program: Program to allocate memory for 5 floats using malloc() or calloc(), enter these numbers into the memory block, and calculate and display the average of these numbers
Author: Alison Gleeson
Date: 12/12/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers = 5;
    float *ptr;
    int i;
    float sum = 0;
    float avg = 0;

    //part 1 - allocating memory for 5 floats using calloc()
    ptr = calloc(numbers, sizeof(float));

    //if calloc was unsuccessful
    if (ptr == NULL)
    {
        printf("Failed to allocate memory\n");

    }//end unsuccessful if

    //else the calloc was successful
    else 
    {
        printf("Memory allocated successfully\n");
        printf("Please enter %d numbers\n", numbers);


        //part 2 - entering the numbers into the memory block
        for (i=0; i<numbers; i++)
        {
            scanf("%f", &*(ptr+i));

        }//end scanf for loop


        //part 3 - calculating and displaying the average of these numbers
        //finding the sum of the numbers
        for (i=0; i<numbers; i++)
        {
            sum = sum + *(ptr + i);

        }//end sum for loop

        //finding the average of the numbers
        avg = sum/((float)numbers);

        //displaying the average
        printf("\n\nThe average of your numbers is %f", avg);

        //freeing the memory
        free(ptr);

    } //end successful else

    return 0;

}