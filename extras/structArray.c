#include <stdio.h>

#define LENGTH 11
#define S_LENGTH 21
#define SIZE 5

struct date
{
    int day;
    int month;
    int year;
};

struct student_rec
{
    int student_ID;
    char firstname[LENGTH];
    char surname[S_LENGTH];
    int results[SIZE];
    struct date DOB;
};


int main()
{
    int i;
    struct student_rec students[SIZE];

    printf("Enter ID for each student:\n");
    for(i=0; i<SIZE; i++)
    {
        printf("Student %d: ", i+1);
        scanf("%d", & students[i].student_ID);
    } //end for

    while(getchar() != '\n');

    printf("\nEnter first name of each student:\n");
    for(i=0; i<SIZE; i++)
    {
        printf("Student %d: ", i+1);
        fgets(students[i].firstname, LENGTH-1, stdin);
    } //end for


    printf("\nThe ID of each student is:");
    for(i=0; i<SIZE; i++)
    {
        printf("\nStudent %d: %d", i+1, students[i].student_ID);

    } //end for

    printf("\nEnter first name of each student is:\n");
    for(i=0; i<SIZE; i++)
    {
        printf("Student %d: %s", i+1, students[i].firstname);
    } //end for

    return 0;
}
