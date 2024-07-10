#include <stdio.h>

#define MAX_CHARS 81


int main()
{
    //creating the file pointer
    FILE *fp_in;

    //array to store the string from the file
    char one_line[MAX_CHARS];


    //open the file called file.txt for reading and check if this is successful
    if ( (fp_in = fopen("File.txt", "r")) == NULL)
    {
        printf("\nError opening file");

        return 0;
    }

    else
    {
        //read at most 
            //(i) MAX_CHARS-1 characters from the file 
            //(ii) until a new line character is read
            //(iii) The end of the file is reached
        while ( (fgets(one_line, MAX_CHARS, fp_in)) != NULL)
        {
            printf("%s", one_line);
        }

        //close the file once finished
        fclose(fp_in);
    }

    return 0;
}