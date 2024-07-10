/*
Exam year: 2016/17
Section: Section B
Question: 3(a)
You are a software developer and asked to develop a program that allows a user to enter a set of numbers.
The user can decide the size of this set when the program runs.
Your program must find the highest and lowest numbers in the set and display both to standard output.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int numbers = 0;
    int no_bytes = 0;
    int i;
    int highest = 0;
    int lowest = 0;

    //part 1 - getting the amount of data the user wants to enter
    printf("How many numbers do you want to enter?\n");
    scanf("%d", &numbers);

    //part 2 - calculate the no. of bytes required
    no_bytes = numbers * sizeof(int);

    //part 3 - allocating the memory
    ptr = malloc(no_bytes);

    //part 4 - check if malloc was successful
    if (ptr == NULL) //if allocation was unsuccessful
    {
        printf("\nFailed to allocate memory");
    } //end if

    else //if allocation was successful
    {
        //part 5 - start using allocated memory
        printf("\nMemory allocation successful\n");
        printf("\nEnter the set of %d numbers\n", numbers);

        //entering data to memory block
        for (i = 0; i<numbers; i++)
        {
            scanf("%d", &*(ptr + i));
        } //end for

        //initialising highest and lowest
        highest = *ptr;
        lowest = *ptr;

        //finding the highest and lowest numbers
        for (i=0; i<numbers; i ++)
        {
            //finding highest
            if (highest < *(ptr + i))
            {
                highest = *(ptr + i);
            } //end highest if

            //finding lowest
            if (lowest > *(ptr + i))
            {
                lowest = *(ptr + i);
            } //end lowest if

        } //end for

        printf("\nThe highest numbers was %d\nThe lowest number was %d", highest, lowest);

        //part 6 - free the memory block once finished using
        free(ptr);

    } //end else

    return 0;
}