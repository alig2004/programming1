/*
Program: Read a string from standard input and, using separate functions, (a) compare it to the string "Hello World", and (b) determine the frequency of the word is (assuming there is at least one occurence)
Author: Alison Gleeson
Date: 05/03/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 25

void compare(char []);
void isCount(char []);


int main()
{

    char userStr[SIZE];


    //getting the string from user
    printf("Please enter a short sentence:\n");
    fgets(userStr, SIZE-1, stdin);


    //comparing the string to "Hello World"
    compare(userStr);


    //counting the frequency of "is" in the string
    isCount(userStr);


    return 0;

} //end main


void compare(char str[])
{

    char world[] = "Hello World\n";
    int comp = 0;


    //comparing using strcmp
    comp = strcmp(world, str);


    //if comp = 0 strings are the same, else they are different
    if (comp == 0)
    {

        printf("\nYour string is \"Hello World\"");

    } //end if
    else
    {

        printf("\nYour string is not \"Hello World\"");

    } //end else

    
    return;

} //end compare()


void isCount(char str[])
{

    int count = 0;
    int i = 0;


    //checking for occurrences of 'is'
    for (i=0; i<SIZE; i++)
    {

        //if str[i] == ' ', check if next character is 'i'
        if (str[i] == ' ')
        {

            //if str[i+1] == i, check if next character is 's'
            if (str[i+1] == 'i')
            {

                //if str[i+2] == 's', check if next character is ' '
                if (str[i+2] == 's')
                {

                    //if str[i+3] == ' ', increment count
                    if (str[i+3] == ' ')
                    {

                        count++;

                    } //end last space if

                } //end s if

            } //end i if

        } //end space if

    } //end for


    //displaying the number of occurrences of 'is'
    printf("\nThe word \"is\" occurs %d times", count);


    return;

} //end isCount