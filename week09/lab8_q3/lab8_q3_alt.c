/*
Program: Create a 3x2 array, input elements, calculate and display the sum of the rows separately, calculate and display the sum of the columns separately, find the highest number in the array and display it
Author: Alison Gleeson
Date: 22/11/2023
*/

#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int arr[ROW][COL] = {0};
    int i, j;
    int sum = 0;
    int highest = 0;

    //part a
    //enter data into array
    printf("Enter %d numbers:\n", ROW*COL);

    for (i = 0; i<ROW; i++)
    {//begin ROW loop
        
        for (j=0; j<COL; j++)
        {//begin COL loop

            scanf("%d", &arr[i][j]);

        }//end COL loop

    }//end ROW loop


    //part b
    //find and display sum of each row separately
    printf("\n\nThe sum of the rows are:\n");

    for (i = 0; i<ROW; i++)
    {//begin ROW loop
        
        for (j=0; j<COL; j++)
        {//begin COL loop
            
            sum = sum + arr[i][j];

        }//end COL loop

        printf("The sum of row %d is %d\n", i, sum);
        sum = 0;

    }//end ROW loop


    //part c
    //find and display sum of each column separately
    printf("\n\nThe sum of the columns are:\n");

    for (j = 0; j<COL; j++)
    {//begin ROW loop
        
        for (i=0; i<ROW; i++)
        {//begin COL loop
            
            sum = sum + arr[i][j];

        }//end COL loop

        printf("The sum of col %d is %d\n", j, sum);
        sum = 0;

    }//end ROW loop


    //part d
    //find and print the highest number in the array
    highest = arr[0][0];

    for (i = 0; i<ROW; i++)
    {//begin ROW loop
        
        for (j=0; j<COL; j++)
        {//begin COL loop
            
            if (highest < arr[i][j])
            {

                highest = arr[i][j];

            }

        }//end COL loop

    }//end ROW loop
    printf("\n\nThe highest number is %d", highest);

    return 0;
}