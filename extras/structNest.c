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
    struct student_rec stu;


    //entering data
    printf("Enter ID:\n");
    scanf("%d", & stu.student_ID);

    //clear input buffer
    while(getchar() != '\n');

    printf("Enter first name:\n");
    fgets(stu.firstname, LENGTH-1, stdin);

    printf("Enter surname:\n");
    fgets(stu.surname, S_LENGTH-1, stdin);

    printf("Enter %d results:\n", SIZE);
    for (i=0; i<SIZE; i++)
    {
        scanf("%d", & stu.results[i]);
    } //end for

    printf("Enter date of birth (day, month, year):\n");
    scanf("%d", & stu.DOB.day);
    scanf("%d", & stu.DOB.month);
    scanf("%d", & stu.DOB.year);


    //displaying data
    printf("\n\nStudent record is:");
    printf("\nID: %d", stu.student_ID);
    printf("\nFirst name: %s", stu.firstname);
    printf("Surname: %s", stu.surname);
    printf("Results are:\n");
    for(i=0; i<SIZE; i++)
    {
        printf("%d ", stu.results[i]);
    } //end for
    printf("\nDate of birth:");
    printf("\n\tDay: %d", stu.DOB.day);
    printf("\n\tMonth: %d", stu.DOB.month);
    printf("\n\tYear: %d", stu.DOB.year);

    return 0;

} //end main()