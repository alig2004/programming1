#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int numbers = 0;
    int no_bytes = 0;
    int i;

    printf("How many numbers will you enter?: ");

    scanf("%d", &numbers);

    no_bytes = numbers * sizeof(int);

    ptr = malloc(no_bytes);

    if (ptr == NULL)
    {
        printf("\nFailed to allocate memory. Program end.");
    }
    else
    {
        printf("\nMemory allocated successfully.");

        printf("\nEnter the set of %d numbers:\n", numbers);

        for(i=0; i<numbers; i++)
        {
            scanf("%d", & *(ptr + i));
        }

        printf("\nYour numbers are:\n");
        for(i=0; i<numbers; i++)
        {
            printf("%d\n", *(ptr + i));
        }

        free(ptr);
    }

    return 0;
}