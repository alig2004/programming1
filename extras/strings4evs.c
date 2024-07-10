#include <stdio.h>

#define SIZE 12

int main()
{
    char *months[SIZE] = {"Jan", "Feb", "Mar", "Apr", "May", 
                          "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int i = 0;


    //displaying the months of the year
    printf("The months of the year are:\n");

    for (i=0; i<SIZE; i++)
    {
        printf("%s\n", months[i]);
    }

    return 0;
}