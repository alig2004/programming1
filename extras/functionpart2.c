//returning a value from a function - finding the minimum of two numbers

#include <stdio.h>

//function signature
int find_minimum(int, int);


int main()
{
    int num1, num2;
    int min = 0;

    printf("Enter any two whole numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);


    //find the minimum of two numbers by calling find_minimum
    min = find_minimum(num1, num2);


    printf("\nThe minimum of %d and %d is %d", num1, num2, min);

    return 0;

}//end main()

int find_minimum(int n1, int n2)
{
    int minimum = 0;

    if (n1 < n2)
    {
        minimum = n1;
    }//end if

    else
    {
        minimum = n2;
    }//end else

    //return the data value in minimum
    return minimum;

}//end find_minimum