#include <stdio.h>

int main()
{
    //ptr contains the address of the 1st character in the string, 'H'
    char *ptr = "Hello";

    //printf("%s", ptr); 
    //displays the whole string by character, while the contents
    //of the address pointed to by ptr is not the NULL character


    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        //displays an individual character

        ptr++;
        //the address in ptr must be incremented to
        //display the next character in the string
    }


    return 0;
}