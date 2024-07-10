/*
Program: Copy the code from q2 (lab11_q2.c) and alter it to create a second memory block and store the average in this block, then display the numbers in the first block and their average in the second block
Author: Alison Gleeson
Date: 12/12/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers = 5;
    int number_avg = 1;
    float *ptr;
    float *ptr_avg;
    int i;
    float sum = 0;
    float avg = 0;

    //allocating memory for 5 floats using calloc() in ptr
    ptr = calloc(numbers, sizeof(float));

    //if calloc() for ptr was unsuccessful
    if (ptr == NULL)
    {
        printf("Failed to allocate memory\n");

    }//end unsuccessful ptr calloc() if

    //else the calloc() for ptr was successful
    else 
    {
        printf("Memory allocated successfully\n");
        printf("Please enter %d numbers\n", numbers);


        //entering the numbers into the ptr memory block
        for (i=0; i<numbers; i++)
        {
            scanf("%f", &*(ptr+i));

        }//end scanf for loop

        //printing the numbers entered
        printf("\nYour numbers were:\n");
        for (i=0; i<numbers; i++)
        {
            printf("%f\n", *(ptr+i));

        }//end scanf for loop

        //finding the sum of the numbers in ptr
        for (i=0; i<numbers; i++)
        {
            sum = sum + *(ptr + i);

        }//end sum for loop

        //allocating memory for the average in ptr_avg
        ptr_avg = calloc(number_avg, sizeof(float));

        //if calloc() for ptr_avg was unsuccessful
        if (ptr_avg == NULL)
        {
            printf("Failed to allocate memory\n");

        }//end unsuccessful ptr_avg calloc() if

        //else the calloc() for ptr_avg was successful
        else
        {
            //finding the average of the numbers
            avg = sum/((float)numbers);

            //displaying the average
            printf("\n\nThe average of your numbers is %f", avg);

            //freeing the memory of ptr_avg
            free(ptr_avg);

        } //end successful ptr_avg calloc() else

        //freeing the memory of ptr
        free(ptr);

    } //end successful ptr calloc() else

    return 0;

}