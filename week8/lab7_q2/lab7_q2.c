/*
Program: Create a 3x2 2D array, enter and display values, find the largest and smallest values and display them, and calculate the average of the values and display it
Author: Alison Gleeson
Date: 14/11/2023
*/

#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int arr[ROW][COL];
    int i, j;
    int highest = 0;
    int lowest = 0;
    int sum = 0;
    float avg = 0;

    printf("Please enter %d numbers:\n", ROW*COL);

    //getting array values
    for(i=0; i<ROW; i++)
    {//start row loop

        for(j=0; j<COL; j++)
        {//start column loop
            scanf("%d", &arr[i][j]);
        }//end column loop

    }//end row loop

    //displaying array values
    for(i=0; i<ROW; i++)
    {//start row loop

        for(j=0; j<COL; j++)
        {//start column loop
            printf("\nRow %d, column %d is %d", i, j, arr[i][j]);
        }//end column loop

    }//end row loop

    //initialising highest and lowest to the array
    highest = arr[0][0];
    lowest = arr[0][0];

    //loop to find highest and lowest values
    for(i=0; i<ROW; i++)
    {//start row loop

        for(j=0; j<COL; j++)
        {//start column loop

            //finding highest
            if (highest < arr[i][j])
            {
                highest = arr[i][j];
            }//end highest if

            //finding lowest
            if (lowest > arr[i][j])
            {
                lowest = arr[i][j];
            }//end lowest if

        }//end column loop

    }//end row loop

    //printing highest and lowest
    printf("\n\nThe highest number in the array is %d\nThe lowest number in the array is %d", highest, lowest);

    //finding the sum of the array
    for(i=0; i<ROW; i++)
    {//start row loop

        for(j=0; j<COL; j++)
        {//start column loop
            sum = sum + arr[i][j];
        }//end column loop

    }//end row loop
    
    printf("\n\n%d", sum);

    //calculating and printing the average
    avg = ((float)sum /(ROW*COL));
    printf("\n\nThe average of the array is %.1f", avg);

    return 0;
}