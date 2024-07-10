/*
Program: User enters 5 numbers into an array, pass the array to a function which displays whether the numbers are odd or even, calculates the total number of even numbers and displays it
Author: Alison Gleeson
Date: 13/02/2024
*/

#include <stdio.h>

#define SIZE 5

int evenOdd(int []);


int main()
{
    int arr[SIZE];
    int i = 0;
    int evens = 0;


    //asking for users numbers 
    printf("Please enter %d numbers:\n", SIZE);

    //for loop to assign numbers to array
    for (i=0; i<SIZE; i++)
    {

        scanf("%d", &arr[i]);

    } //end for loop
    printf("\n");


    //calling evenOdd()
    evens = evenOdd(arr);


    //displaying the amount of even numbers
    printf("\nThere are %d even numbers in your array", evens);


    return 0;

} //end main()


//function to tell the user if a number they entered is even or odd and calculate the amount of even numbers
int evenOdd(int my_array[])
{
    int count  = 0;
    int i = 0;

    //for loop to check whether each element is even or odd 
    for (i=0; i<SIZE; i++)
    {

        //if element is even
        if (my_array[i]%2 == 0)
        {

            printf("%d is even\n", my_array[i]);

            count = count + 1;

        } //end if

        //else element is odd
        else
        {

            printf("%d is odd\n", my_array[i]);

        } //end else

    }

    return count;

} //end evenOdd()