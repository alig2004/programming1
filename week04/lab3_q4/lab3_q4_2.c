/*
Program: Program to ask a user their age and calculate the number of beats their heart has made in their lifetime
Author: Alison Gleeson
Date: 10/10/2023
*/

#include <stdio.h>
int main()
{
    int age = 0;
    int beats = 0;

    printf("How old are you?\n");
    scanf("%d", &age);

    beats = age*39447000;

    printf("Your heart has beat roughly %d times during your whole life", beats);

    return 0;
}