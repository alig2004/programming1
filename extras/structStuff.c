/*
Intro to structures
*/

#include <stdio.h>
#include <string.h>

#define SIZE 5

//structure template for student records
struct student_rec
{
    int student_ID;
    char firstname[21];
    char surname[21];
    int results[5];
};

//function signatures would go here


int main()
{
    int i = 0;

    //creating variables for student_rec
    struct student_rec student1, student2;


    //assigning data to student 1
    //assigning a numeric student ID
    student1.student_ID = 1234;

    //assigning a first name
    strcpy(student1.firstname, "Sarah");

    //assigning a surname
    strcpy(student1.surname, "Jones");

    //assigning a result to student1
    student1.results[0] = 100;
    student1.results[1] = 89;
    student1.results[2] = 56;
    student1.results[3] = 95;
    student1.results[4] = 91;


    //displaying student 1 data
    printf("Student 1\n");
    printf("The structure member contains:\n");
    printf("Student ID is: %d\n", student1.student_ID);
    printf("First name is: %s\n", student1.firstname);
    printf("Surname is: %s\n", student1.surname);
    printf("Results are: \n");
    for (i=0; i<5; i++)
    {
    printf("%d\n", student1.results[i]);
    }


    //entering data for student 2 from standard input
    //entering the studentID
    printf("\n\nPlease enter the student ID of student 2:\n");
    scanf("%d", &student2.student_ID);

    //entering the first name
    printf("Please enter the first name of student 2:\n");
    scanf("%s", student2.firstname);

    //entering the surname
    printf("Please enter the surname of student 2:\n");
    scanf("%s", student2.surname);

    //entering the results
    printf("Please enter sutdent 2's results:\n");
    for (i=0; i<SIZE; i++)
    {
        scanf("%d", &student2.results[i]);
    }


    //displaying student 2 data
    printf("\n\nStudent 2\n");
    printf("The structure member contains:\n");
    printf("Student ID is: %d\n", student2.student_ID);
    printf("First name is: %s\n", student2.firstname);
    printf("Surname is: %s\n", student2.surname);
    printf("Results are: \n");
    for (i=0; i<5; i++)
    {
    printf("%d\n", student2.results[i]);
    }


    return 0;

}