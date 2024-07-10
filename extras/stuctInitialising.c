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


    //displaying student data
    printf("The structure member contains:\n");
    printf("Student ID is: %d\n", student.student_ID);
    printf("First name is: %s\n", student.firstname);
    printf("Surname is: %s\n", student.surname);
    printf("Results are: \n");
    for (i=0; i<5; i++)
    {
    printf("%d\n", student.results[i]);
    }

    
    return 0;
}