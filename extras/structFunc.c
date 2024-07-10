#include <stdio.h>
#include <string.h>


#define SIZE 5


struct student_rec
{
    int student_ID;
    char firstname[21];
    char surname[21];
    int results[SIZE];
};


void enter(struct student_rec *);
void display(struct student_rec);


int main()
{

    struct student_rec student;


    enter(& student);


    display(student);


    return 0;

} //end main()


void enter(struct student_rec *ptr)
{

    int i;


    printf("Please enter student ID: ");
    scanf("%d", & ptr -> student_ID);
    while(getchar() != '\n');


    printf("Enter first name: ");
    fgets(ptr -> firstname, 20, stdin);


    printf("Enter surname: ");
    fgets(ptr -> surname, 20, stdin);


    printf("Enter %d results: ", SIZE);
    for (i=0; i<SIZE; i++)
    {

        scanf("%d", & ptr -> results[i]);

    } //end for

} //end enter()


void display(struct student_rec stu)
{

    int i;

    printf("\nStudent Record\n");
    printf("ID is: %d\n", stu.student_ID);
    printf("First name: %s", stu.firstname);
    printf("Surname is: %s", stu.surname);
    printf("Results are: \n");

    for (i=0; i<SIZE; i++)
    {

        printf("%d\n", stu.results[i]);

    } //end for

} //end display()