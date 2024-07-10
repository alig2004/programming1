/*
Program: Create a 3x2 array, input elements, calculate and display the sum of the rows separately, calculate and display the sum of the columns separately, find the highest number in the array and display it
Author: Alison Gleeson
Date: 21/11/2023
*/

#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int arr[ROW][COL];
    int i, j;
    int sumRow0 = 0;
    int sumRow1 = 0;
    int sumRow2 = 0;
    int sumCol0 = 0;
    int sumCol1 = 0;
    int highest = 0;

    //getting the elements of arr
    printf("Please enter %d numbers:\n", ROW*COL);
    for(i=0; i<ROW; i++)
    { //for loop for rows

        for(j=0; j<COL; j++)
        { //for loop for columns

            //getting elements
            scanf("%d", &arr[i][j]);

        } //end for loop for columns

    } //end for loop for rows


    //getting the sum of the rows
    for(i=0; i<ROW; i++)
    { //for loop for rows

        for(j=0; j<COL; j++)
        { //for loop for columns

            //sum of the row 0
            if (i == 0)
            {
                sumRow0 = sumRow0 + arr[i][j];
            }

            //sum of the row 1
            else if (i == 1)
            {
                sumRow1 = sumRow1 + arr[i][j];
            }

            //sum of the row 2
            else
            {
                sumRow2 = sumRow2 + arr[i][j];
            }

        } //end for loop for columns

    } //end for loop for rows
    printf("\nThe sum of each row is:\n%d \n%d\n%d", sumRow0, sumRow1, sumRow2);


    //getting the sum of the columns
    for(i=0; i<ROW; i++)
    { //for loop for rows

        for(j=0; j<COL; j++)
        { //for loop for columns

            //sum of the column 0
            if (j == 0)
            {
                sumCol0 = sumCol0 + arr[i][j];
            }

            //sum of the column 1
            else
            {
                sumCol1 = sumCol1 + arr[i][j];
            }

        } //end for loop for columns

    } //end for loop for rows
    printf("\n\nThe sum of each column is:\n%d\n%d", sumCol0, sumCol1);


    //finding and printing the highest element
    highest = arr[0][0];
    for(i=0; i<ROW; i++)
    { //for loop for rows

        for(j=0; j<COL; j++)
        { //for loop for columns

            if (highest < arr[i][j])
            {
                highest = arr[i][j];
            }

        } //end for loop for columns

    } //end for loop for rows
    printf("\n\n%d is the highest number in the array", highest);

    return 0;
}