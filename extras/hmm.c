#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("The contents of num is %d", num); //regular printing of contents
    printf("\nThe address of num is %p", &num); //address via %p and &

    printf("\n\nThe contents of num is %d", *ptr); //dereferencing the pointer to print contents
    printf("\nThe address of num is %p", ptr); //address via pointer as is

    return 0;
}