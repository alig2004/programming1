/*
Program: Ask a user for their name, compare it to a list of other names in an array and if name matches, display a greeting, otherwise display "Name not found"
Author: Alison Gleeson
Date: 27/02/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 21
#define NAMES 7

int main()
{
    char user_name[SIZE] = " ";
    char *names_list[NAMES] = {"Brenda", "Phoebe", "Maria", "Alison", "John", "Patrick", "Robert"};
    int i = 0;
    int result = 0;
    int match = 0;


    //getting users name
    printf("What is your first name?\n");
    scanf("%s", user_name);

    
    //checking users name against names_list
    for (i=0; i<NAMES; i++)
    {
        //comparing user_name to the current name
        result = strcmp(user_name, names_list[i]);
        
        //checking if the strings are the same and breaking from loop if yes
        if (result == 0)
        {
            printf("Hello %s", user_name);
            match = 1;
            break;
        }
    }

    //printing "Name not found" if the if was never entered
    if (match != 1)
    {
        printf("Name not found");
    }

    return 0;

}