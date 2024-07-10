/*
Program description: Removing blank lines from a file
Author: Alison Gleeson
Date: 16/04/2024
*/

#include <stdio.h>

#define MAX 20

int main()
{
    char str[MAX];
    int i;


    //creating pointer to file
    FILE *fp;

    
    //checking if txt1.txt was opened successfully
    if ((fp = fopen("blank.txt", "r+")) == NULL)
    {
        printf("Error opening blank.txt");

        return 0;
    }
    else
    {
        printf("blank.txt opened successfully\n");
        
        //displaying before removing blank lines
        printf("\nblank.txt contains:\n");
        while (fgets(str, MAX, fp) != NULL)
        {
            printf("%s", str);
        }

        
        //removing any blank lines
        while (fgets(str, MAX, fp) != NULL)
        {
            for (i=0; i<MAX; i++)
            {
                if ((str[i-1] == '\n') && (str[i] == '\n'))
                {
                    str[i] = ' ';
                }
            }
        }


        //displaying after removing blank lines
        printf("\n\nblank.txt now contains:\n");
        while (fgets(str, MAX, fp) != NULL)
        {
            printf("%s", str);
        }



        fclose(fp);

    } //end blank.txt open else

    return 0;

}