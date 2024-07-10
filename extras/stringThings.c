#include <stdio.h>

int main()

{

    char greeting[6] = "Hello";


    printf("%s", greeting);
    printf("\n");

    //right-justifies the string by counting 20 spaces from the screen margin
    printf("%20s", greeting);
    printf("\n");

    //left-justifies the string by counting 20 spaces from the screen margin
    printf("%-20s", greeting);
    printf("\n");

    //displays the first 3 characters of the string
    printf("%.3s", greeting);
    printf("\n");

    //displays the first 3 characters of the string, width 20
    printf("%20.3s", greeting);


    return 0;
}