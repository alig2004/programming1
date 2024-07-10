//Program that uses Functions

#include <stdio.h>

// Function signature or function prototype
void stars(int, char);

int main()
{
    int no_chars = 0;
    char my_char;

    printf("How many characters to display?\n");
    scanf("%d", &no_chars);

    //clearing the input buffer
    while (getchar() != '\n');

    printf("Which character to display?\n");
    scanf("%c", &my_char);

    //Execute our function stars()
    stars(no_chars, my_char);

    printf("\n\nAfter function call");

    return 0;

} // end main()



//function stars() used to display a set of characters
void stars(int num, char ch)
{
    int i;

    for(i=0; i<num; i++)
    {
        printf("%c", ch);
    } //end for

} // end stars()