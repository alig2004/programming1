/*
Program: Program to get user inputted number for terms in the fibonacci sequence, store the sequence in an array, display it and end the program when the user says so
Author: Alison Gleeson
Date: 27/11/2023
*/

#include <stdio.h>
#define SIZE 20

int main()
{
    int choice = 1;
    int terms = 0;
    int arr[SIZE] = {0};
    int i;

    printf("Welcome to the Fibonacci series program\n");

    //part 4 - ensuring program runs constantly
    do
    {
        printf("\n\nEnter your selection:\nEnter 1 to begin the program\nEnter 0 to end the program\n");
        scanf("%d", &choice);
        
        //if user chooses to begin the program
        if (choice == 1)
        {//start if

            //part 1 - getting number of terms
            printf("Please enter the number of terms you want (between 1 and 20):\n");
            scanf("%d", &terms);

            //part 2 - calculating and storing the array
            for (i=0; i<terms; i++)
            {//start for loop

                //ensuring the first term is always 0
                if (i == 0)
                {//start if 

                    arr[i] = 0;

                }//end if

                //ensuring the second term is always 1
                else if (i == 1)
                {//start else if

                    arr [i] = 1;

                }//end else if

                //calculating and initialising further terms
                else
                {//start else

                    arr[i] = arr[(i - 1)] + arr[(i - 2)];

                }//end else

            }//end for loop

            //part 3 - displaying the array
            for (i=0; i<terms; i++)
            {//start for loop

                printf("\n%d", arr[i]);

            }//end for loop

        }//end if
    }
    while (choice == 1);

    //if user ends the program
    if (choice == 0)
    {//start if

        printf("\nProgram ended");

    }//end if

    return 0;
}