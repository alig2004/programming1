#include <stdio.h>

#define ROW 2
#define COL 3

int sum_array(int [][COL]); //int sum_array(int *)

int main()
{
    int values[ROW][COL]; 
    int i, j;
    int sum = 0;

    printf("Enter %d numbers\n", ROW*COL);

    //enter data into the array
    for (i=0; i<ROW; i++)
    {
        for (j=0; j<COL; j++)
        {
            scanf("%d", &values[i][j]);  
        } //end inner for

    } //end outer for

    //calculate the sum of the contents of the array 
    sum = sum_array(values); 

    //display the sum of the contents of the array

    printf("\nThe sum of the array is %d", sum);

    return 0;
} //end main()


//function sum_array() will calculate the sum of the contents of any 1-D array
int sum_array(int my_array[][COL])
{
    int total = 0;
    int i, j;

    //calculate the total of the array
    for (i=0; i<ROW; i++)
    {
        for (j=0; j<COL; j++)
        {
            total = total + my_array[i][j];
        }//end inner for
    }//end outer for

    return total;
} //end sum_array()