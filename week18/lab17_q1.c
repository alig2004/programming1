/*
Program: Read a string from standard input and use separate functions to (a) count the number of times a vowel occurs, (b) find the number of characters in the string to display it in reverse, and (c) concatenate the string to "I entered the string "
Author: Alison Gleeson
Date: 05/03/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 25

int vowelCount(char []);
void stringReverse(char []);
void newString(char []);


int main()
{

    char userStr[SIZE];
    int numVowel = 0;


    //getting the string
    printf("Please enter a short sentence:\n");
    fgets(userStr, SIZE-1, stdin);


    //getting the number of vowels in the sentence and displaying it
    numVowel = vowelCount(userStr);

    printf("\nThere are %d vowels in your sentence\n", numVowel);


    //finding the number of characters in a string and printing it in reverse
    printf("Your string in reverse is:");
    stringReverse(userStr);


    //concatenating the string to "I entered the string: " and displaying it
    printf("\n");
    newString(userStr);


    return 0;

} //end main()


//finding the number of vowels in a string
int vowelCount(char str[])
{

    int i = 0;
    int count = 0;

    //for loop to cycle through string
    for (i=0; i<SIZE; i++)
    {

        //switch to increment count for vowels
        switch (str[i])
        {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
            {
                count++;
                break;
            } //end vowel case

            default:
            {
                break;
            } //end default case

        } //end switch

    } //end for

    return count;

} //end vowelCount()


void stringReverse(char str[])
{

    int len = 0;
    int i = 0;


    //finding the length of the string
    len = strlen(str);


    //printing the string in reverse
    for (i=len-1; i>=0; i--)
    {

        printf("%c", str[i]);

    } //end for


    return;

} //end stringReverse()


void newString(char str[])
{

    char sentence[50] = "I entered the string: ";


    //concatenating the string
    strcat(sentence, str);

    
    //displaying the concatenated string
    puts(sentence);


    return;

} //end newString()