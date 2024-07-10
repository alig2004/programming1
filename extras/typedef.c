#include <stdio.h>

#define LENGTH 11
#define S_LENGTH 21
#define SIZE 5

typedef char STRING;

struct date
{
    int day;
    int month;
    int year;
};

struct student_rec
{
    int student_ID;
    STRING firstname[LENGTH];
    char surname[S_LENGTH];
    int results[SIZE];
    struct date DOB;
};


int main()
{
    int i;
    
    typedef int* INT_POINTER;

    int *ptr;
    INT_POINTER ptr2;

    STRING sentence[LENGTH] = "Hello";

    printf("%s", sentence);

    return 0;
}