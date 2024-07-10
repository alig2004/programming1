/*
Program: Using pass by reference, pass the length of a side of a square and the length of the radius of a circle to
         2 separate functions, calculate the area of the square and the circle and return these numbers to main()
Author: Alison Gleeson
Date: 13/02/2024
*/

#include <stdio.h>


int squareArea(int *);
float circleArea(int *);


int main()
{
    int sqLength = 0;
    int circRad = 0;
    int sqArea = 0;
    float circArea = 0;


    //getting length of squares side and radius of circle
    printf("Please enter the length of one side of your square and the radius of your circle\n");
    scanf("%d", &sqLength);
    scanf("%d", &circRad);


    //calling squareArea()
    sqArea = squareArea(&sqLength);


    //calling circleArea() 
    circArea = circleArea(&circRad);


    //displaying the areas
    printf("\nThe area of your square is %d", sqArea);
    printf("\nThe area of your circle is %.2f", circArea);


    return 0;
} //end main()


//finds the area of a square with one given side
int squareArea(int *side)
{
    int area = 0;

    area = *side * *side;

    return area;
} //end squareArea()


//finds the area of a circle with a given radius
float circleArea(int *rad)
{
    float area = 0;

    area = *rad * 3.14;

    return area;
} //end circleArea