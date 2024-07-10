/*
Program: Read a string from standard input and, using separate functions, (a) compare it to the string "Hello World", and (b) determine the frequency of the word is (assuming there is at least one occurence)
Author: Alison Gleeson
Date: 05/03/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 100

void compare(char []);
void isCount(char []);


int main()
{

    char userStr[SIZE];


    //getting the string from user
    printf("Please enter a short sentence:\n");
    fgets(userStr, SIZE-1, stdin);


    //removing newline character if present
    userStr[strlen(userStr)-1] = '\0';


    //comparing the string to "Hello World"
    compare(userStr);


    //counting the frequency of "is" in the string
    isCount(userStr);


    return 0;

} //end main


void compare(char str[])
{

    char world[] = "Hello World";
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

} //end compare()


void isCount(char str[])
{

    int count = 0;
    char *found;
    int i = 0;


    //checking if the sentence begins with "is" or if string is exclusively "is"
    if ((strncmp(str, "is ", 3) == 0) || (strncmp(str, "is\0", 3) == 0))
    {

        count++;

    } //end if


    //placing the address of first occurrence of the word "is" in found
    found = strstr(str, "is");


    //checking if is appears later in the sentence
    while ((found = strstr(found, " is ")) != '\0')
    {   
        
        count++;

        // move pointer to point at the next character following the occurrence of " is " in the sentence
        found++;

    } //end while

    
    //incrementing for the last occurrence of "is"
    if (strcmp(strrchr(str, '\0'), " is"))
    {

        count++;

    } //end if

   
   //decrementing to prevent double count of last "is" if there is a space after it
    if (strcmp(strrchr(str, ' '), " is"))
    {

        count--;

    } //end if
   

    //displaying the number of occurrences of 'is'
    printf("\nThe word \"is\" occurs %d times", count);

} //end isCount()