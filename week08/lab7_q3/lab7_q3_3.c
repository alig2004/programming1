/*
Program: Input values into a 4x5 array, find values less than 0, display these values along with their row and column numbers
Author: Alison Gleeson
Date: 14/11/2023
*/

#include <stdio.h>

#define ROW 4
#define COL 5

int main()
{
    int arr[ROW][COL];
    int i, j;

    printf("Please enter %d integers (they can be below 0):\n", ROW*COL);


    //getting array elements
    for (i=0; i<ROW; i++)
    {//loop for rows

        for (j=0; j<COL; j++)
        {//loop for columns

            scanf("%d", &arr[i][j]);

        }//end loop for columns

    }//end loop for rows


    //loops to find elements less than 0 and display them with their row and column numbers
    for (i=0; i<ROW; i++)
    {//loop for rows

        for (j=0; j<COL; j++)
        {//loop for columns

            //if element is less than 0
            if (arr[i][j] < 0)
            {//begin if
                
                printf("\nRow %d, column %d contains %d, which is less than 0", i, j, arr[i][j]);

            }//end if

        }//end loop for columns

    }//end loop for rows

    return 0;
}