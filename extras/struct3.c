#include <stdio.h>

struct student_rec
{
    int student_ID;
    char firstname[21];
    char surname[21];
    int results[5];
};


int main()
{
    struct student_rec student = {  1234, 
                                    "Sarah", 
                                    "Jones", 
                                    {54, 63, 77, 90, 51}
                                 };
    int i = 0;
    struct student_rec *ptr; //currently contains a random address


    //making ptr point at the structure variable student
    ptr = &student;


    //displaying student ID
    printf("Student ID is: %d\n", student.student_ID);
    //can also be displayed like so
    printf("Student ID is: %d\n", (*ptr).student_ID);
    //or
    printf("Student ID is: %d\n", ptr -> student_ID);


    //displaying first name
    printf("\nFirst name is: %s\n", student.firstname);
    //can also be displayed like so
    printf("First name is: %s\n", (*ptr).firstname);
    //or
    printf("First name is: %s\n", ptr -> firstname);


    //displaying surname
    printf("\nSurname is: %s\n", student.surname);
    //can also be displayed like so
    printf("Surname is: %s\n", (*ptr).surname);
    //or
    printf("Surname is: %s\n", ptr -> surname);


    printf("\nResults are: \n");
    for (i=0; i<5; i++)
    {
    printf("%d\n", student.results[i]);
    }
    printf("Results are: \n");
    for (i=0; i<5; i++)
    {
    printf("%d\n", (*ptr).results[i]);
    }
    printf("Results are: \n");
    for (i=0; i<5; i++)
    {
    printf("%d\n", ptr -> results[i]);
    }

    
    return 0;
}