/* 
Program: Initialise a 4x6 array, find the sum of all of the elements and print it
Author: Alison Gleeson
Date: 21/11/2023
*/

#include <stdio.h>

#define ROW 4
#define COL 6

int main()
{
    int data[ROW][COL] = {  {3, 4, 5, 7, 4, 2}, 
                            {1, 4, 4, 8, 13, 1}, 
                            {9, 1, 0, 2, 0, 0}, 
                            {0, 2, 6, 3, -1, -8}, 
                         };
    int i, j;
    int sum = 0;

    for(i=0; i<ROW; i++)
    { //for loop for rows

        for(j=0; j<COL; j++)
        { //for loop for columns

            sum = sum + data[i][j];

        } //end for loop for columns

    } //end for loop for rows

    //displaying the sum
    printf("%d", sum);

    return 0;
}