/*
Program: Design a structure to store biographical data about a person (first name, surname, birthday, height, weight, eye colour, and country of citizenship), (a) enter 
         data into the structure, (b) display the data entered, (c) copy the data and modify it for a second person and (d) display the data of the second person
Author: Alison Gleeson
Date: 12/03/2024
*/

#include <stdio.h>

#define SIZE 25
#define DATE 11

struct bio_data
{
    char firstname[SIZE];
    char surname[SIZE];
    char dob[DATE];
    int height;
    int weight;
    char eyecolour[SIZE];
    char country[SIZE];
};

void enter(struct bio_data *);
void display(struct bio_data);


int main()
{
    struct bio_data person1;
    struct bio_data person2;


    // (a) entering data to person1
    printf("Please enter data for person 1\n");
    enter(& person1);


    // (b) displaying person1 data
    printf("\n\nPerson 1 record contains:\n");
    display(person1);


    // (c) copying person1's data to person2 and modifying it
    person2 = person1;
    printf("\nPlease enter data for person 2\n");
    enter(& person2);


    // (d) displaying person2 data
    printf("\n\nPerson 2 record contains:\n");
    display(person2);


    return 0;

} //end main()


// entering/modifying data contained in structure variables
void enter(struct bio_data *ptr)
{

    //getting first name
    printf("Enter first name:\n");
    fgets(ptr -> firstname, SIZE, stdin);

    //getting surname
    printf("Enter surname:\n");
    fgets(ptr -> surname, SIZE, stdin);

    //getting date of birth
    printf("Enter date of birth (dd/mm/yyyy):\n");
    fgets(ptr -> dob, DATE, stdin);

    //getting height
    printf("Please enter height (cm):\n");
    scanf("%d", & ptr -> height);

    //getting weight 
    printf("Please enter weight (kg):\n");
    scanf("%d", & ptr -> weight);

    //clear stdin buffer so enter isn't read
    while(getchar() != '\n');

    //getting eye colour
    printf("Please enter eye colour:\n");
    fgets(ptr -> eyecolour, SIZE, stdin);

    //getting country of citizenship
    printf("Please enter country of citizenship:\n");
    fgets(ptr -> country, SIZE, stdin);

} //end enter()


//displaying data contained in structure variables
void display(struct bio_data pers)
{

    //displaying first name
    printf("First name: %s", pers.firstname);

    //displaying surname
    printf("Surname: %s", pers.surname);

    //displaying date of birth
    printf("Date of birth (dd/mm/yyyy): %s\n", pers.dob);

    //displaying height
    printf("Height: %dcm\n", pers.height);

    //displaying weight 
    printf("Weight: %dkg\n", pers.weight);

    //displaying eye colour
    printf("Eye colour: %s", pers.eyecolour);

    //displaying country of citizenship
    printf("Country of citizenship: %s\n", pers.country);

} //end display()