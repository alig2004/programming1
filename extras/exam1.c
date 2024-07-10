/*
Exam year: 
Section: Section B
Question: 2(b)
*/

#include <stdio.h>

int main()
{
    char barack[] = {'Y','E','S',' ','W','E',' ','C','A','N'};
    int i;
    
    //printing the array as is
    for(i=0; i<10 ; i++)
    {
        printf("%c", *(barack + i));
    }


    printf("\n\n");


    //changing the spaces to underscores and printing 
    for(i=0; i<10 ; i++)
    {
        if ( *(barack + i) == ' ')
        {
            *(barack + i) = '_';
        }

        printf("%c", *(barack + i));
    }


    return 0;
}