#include <stdio.h>

int main()
{
    //create a file pointer to a file
    FILE *fp;

    //open the file called file.txt for reading
    fp = fopen("file.txt", "r");

    //check if the file was opened successfully
    if (fp == NULL)
    {
        printf("Error opening file");
        return 0;
    }
    else
    {
        printf("file.txt opened successfully");

        //close the file after completing all associated work
        fclose(fp);
    }

    return 0;
}