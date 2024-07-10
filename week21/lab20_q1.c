/*
Program Description: Comparing two text files and displaying any differences between them
Author: Alison Gleeson
Date: 16/04/2024
*/

#include <stdio.h>


int main()
{
    char ch1;
    char ch2;


    //creating pointers to files
    FILE *fp1;
    FILE *fp2;


    //opening txt1.txt for reading
    fp1 = fopen("txt1.txt", "r");

    
    //checking if txt1.txt was opened successfully
    if (fp1 == NULL)
    {
        printf("Error opening txt1.txt");

        return 0;
    }
    else
    {
        printf("txt1.txt opened successfully");


        //opening txt2.txt for reading
        fp2 = fopen("txt2.txt", "r");


        //checking if txt2 was opened successfully
        if (fp2 == NULL)
        {
            printf("\nError opening txt2.txt");

            //closing txt1.txt
            fclose(fp1);

            return 0;
        }
        else
        {
            printf("\ntxt2.txt opened successfully\n");


            //comparing each character in the files one by one
            while ((ch1 = fgetc(fp1)) != EOF)
            {
                ch2 = fgetc(fp2);
                //printing the differences
                if (ch1 != ch2)
                {
                    printf("\n%c and %c are not the same", ch1, ch2);
                }
            }


            //closing both files 
            fclose(fp1);
            fclose(fp2);
        }

    } //end txt1.txt open else

    return 0;

}