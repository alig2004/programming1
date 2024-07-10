/*
Program Description: Displaying the contents of a text file with a number for each line
Author: Alison Gleeson
Date: 23/04/2024
*/

#include <stdio.h>

#define MAX 40


int main()
{
    FILE *fp;
    int i = 1;
    char line[MAX];


    //if file doesn't exist
    if ((fp = fopen("hi.txt", "r")) == NULL)
    {
        printf("File cannot be opened");
    }
    //else file exists and can be opened
    else
    {
        printf("File opened successfully\n");

        //printing each line with it's corresponding number
        while (fgets(line, MAX, fp) != NULL)
        {
            printf("%d. %s", i, line);

            i++;
        }

        //closing the file after use
        fclose(fp);

    } //end else

    return 0;

}