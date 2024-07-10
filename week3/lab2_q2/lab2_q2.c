/*
Program: Program to calculate and display volume and surface area of a box and the area of a circle
Author: Alison Gleeson
Date: 03/10/2023
*/

#include <stdio.h>

int main()
{
    int height = 10;
    float length = 11.5;
    float width = 2.5;
    float vol = 0;
    float surf_area;
    float rad = 4.8;
    float pi = 3.14;
    float area = 0;


    //box calculations
    vol = length*width*(float)height;
    surf_area = 2*((length*width)+(length*(float)height)+((float)height*width));

    printf("The volume of the box is %f\nThe surface area of the box is %f\n\n", vol, surf_area);

    //circle calculation
    area = pi*(rad*rad);

    printf("The area of the circle is %f", area);

    return 0;
}