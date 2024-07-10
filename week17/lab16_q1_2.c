/*
Program: Displaying the capital of a city based on what country is entered by the user
Author: Alison Gleeson
Date: 27/02/2024
*/


#include <stdio.h>
#include <string.h>

#define COUNT 10
#define SIZE 21


int main()
{
    char *country[COUNT] = {"Australia", "Belgium", "China", "Denmark", "England", "France", "Greece", "Ireland", "Scotland", "Wales"};
    char *capital[COUNT] = {"Canberra", "Brussels", "Beijing", "Copenhagen", "London", "Paris", "Athens", "Dublin", "Edinburgh", "Cardiff"};
    char user_ent[SIZE] = " ";
    int i = 0;
    int match = 0;
    int result = 0;


    //displaying the list of countries and asking the user to choose one
    printf("Here is a list of countries:\n");
    for (i=0; i<COUNT; i++)
    {

        printf("%s\n", country[i]);

    } //end for
    printf("\nPlease enter the country you want the capital city of: ");
    scanf("%s", user_ent);


    //checking users country against country array
    for (i=0; i<COUNT; i++)
    {
        //comparing user_name to the current name
        result = strcmp(user_ent, country[i]);
        
        //checking if the strings are the same, displaying the city and breaking from loop if yes
        if (result == 0)
        {
            printf("\nThe capital city of %s is %s", country[i], capital[i]);
            match = 1;
            break;
        }
    }

    //printing "Country not found" if the if was never entered
    if (match != 1)
    {
        printf("\nCountry not found");
    }

    return 0;

}