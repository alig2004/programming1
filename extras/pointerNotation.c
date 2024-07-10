#include <stdio.h>
#define SIZE 5
int main()
{
    int a[SIZE] = {2, 4, 6, 8, 10};
    int i;

    // Display the contents of the array
    for(i = 0; i < SIZE; i++)
    {
        printf("\nElement %d contains %d, same as %d", i, a[i], *(a + i));
    } // end for

    printf("\n ");

    return 0;
} 