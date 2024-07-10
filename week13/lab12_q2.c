/*
Program to ask the user for a number and character and output said character that many times
Author: Alison Gleeson
Date: 30/01/2024
*/

#include <stdio.h>


void display(int, char);


int main()
{

    int no_chars = 0;
    char my_char;


    //getting the number of characters
    printf("How many characters should be displayed?\n");
    scanf("%d", &no_chars);


    //clearing the input buffer
    while(getchar() != '\n');


    //getting the character to display
    printf("what character should be displayed?\n");
    scanf("%c", &my_char);


    //calling display()
    display(no_chars, my_char);

    return 0;

}//end main()


//function to display the character the chosen number of times
void display(int num, char ch)
{
    int i = 0;

    //for loop to print ch
    for (i=0; i<num; i++)
    {
        printf("%c", ch);
    }//end for

}//end display()