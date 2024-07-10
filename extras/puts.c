#include <stdio.h>

#define SIZE 21

int main()
{
    char name[SIZE];
    

    printf("Enter your name:\n");
    scanf("%s", name);

    printf("\nHello ");
    puts(name);


    return 0;
}