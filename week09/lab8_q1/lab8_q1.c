/*
Program: Initialise two 3x4 arrays, declare a third 3x4 array, store the product of the corresponding elements from the first two arrays in the corresponding element of the third
Author: Alison Gleeson
Date: 21/11/2023
*/

#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{
    int arr1[ROW][COL];
    int arr2[ROW][COL];
    int arr3[ROW][COL];
    int i, j;

    //getting the elements of arr1
    printf("Please enter %d integers:\n", ROW*COL);
    for(i=0; i<ROW; i++)
    { //for loop for rows

        for(j=0; j<COL; j++)
        { //for loop for columns

            //getting elements
            scanf("%d", &arr1[i][j]);

        } //end for loop for columns

    } //end for loop for rows


    //getting the elements of arr2
    printf("\n\nPlease enter %d more integers:\n", ROW*COL);
    for(i=0; i<ROW; i++)
    { //for loop for rows

        for(j=0; j<COL; j++)
        { //for loop for columns

            //getting elements
            scanf("%d", &arr2[i][j]);

        } //end for loop for columns

    } //end for loop for rows


    //getting the elements of arr3 and printing them
    printf("\n\nHere are your results:");
    for(i=0; i<ROW; i++)
    { //for loop for rows

        for(j=0; j<COL; j++)
        { //for loop for columns

            //finding 3rd array elements and printing them
            arr3[i][j] = arr1[i][j] * arr2[i][j];
            printf("\n%d x %d = %d", arr1[i][j], arr2[i][j], arr3[i][j]);

        } //end for loop for columns

    } //end for loop for rows

    return 0;
}