#include <stdio.h>

#define SIZE 5

int main()
{
    int a[SIZE];

    printf("a is %p and &a[0] is %p", a, &a[0]);

    return 0;
}