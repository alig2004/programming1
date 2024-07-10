/*
Program: Using structures, write a program to store the biographical data about a person. The program should (a) Allow entry of the persons first name, surname, date of birth (using a nested structure), height, weight, 
        eye colour and country of citizenship, (b) Display all the data entered, (c) Copy the data into a second record and modify the person's first name, surname and date of birth, and (d) display the second persons data
Author: Alison Gleeson
Date: 19/03/2024
*/

#include <stdio.h>

#define LENGTH 12
#define SC_LENGTH 24

struct date
{
    int day;
    int month;
    int year;
};

struct bio_rec
{
    char firstname[LENGTH];
    char surname[SC_LENGTH];
    struct date DOB;
    int height;
    int weight;
    char eye[LENGTH];
    char country[SC_LENGTH];
};


int main()
{

    struct bio_rec person1;
    struct bio_rec person2;

    //(a) Entering data into person1
    printf("Please enter person1's data:\n");
    printf("First name: ");
    fgets(person1.firstname, LENGTH, stdin);
    printf("Surname: ");
    fgets(person1.surname, SC_LENGTH, stdin);
    printf("Date of birth (dd/mm/yyyy): ");
    printf("\n\tDay: ");
    scanf("%d", & person1.DOB.day);
    printf("\tMonth: ");
    scanf("%d", & person1.DOB.month);
    printf("\tYear: ");
    scanf("%d", & person1.DOB.year);
    printf("Height (cm): ");
    scanf("%d", & person1.height);
    printf("Weight (kg): ");
    scanf("%d", &person1.weight);
    while (getchar() != '\n');
    printf("Eye colour: ");
    fgets(person1.eye, LENGTH, stdin);
    printf("Country of citizenship: ");
    fgets(person1.country, SC_LENGTH, stdin);


    //(b) Displaying the data entered
    printf("\nPerson1's data:\n");
    printf("First name: %s", person1.firstname);
    printf("Surname: %s", person1.surname);
    printf("Date of birth (dd/mm/yyyy): %d/%d/%d", person1.DOB.day, person1.DOB.month, person1.DOB.year);
    printf("\nHeight: %dcm", person1.height);
    printf("\nWeight: %dkg", person1.weight);
    printf("\nEye colour: %s", person1.eye);
    printf("Country of citizenship: %s", person1.country);


    //(c) Copying the data to person2 and modifying the first name, surname and dob
    person2 = person1;
    printf("\nPlease enter person2's first name, surname and date of birth:\n");
    printf("First name: ");
    fgets(person2.firstname, LENGTH, stdin);
    printf("Surname: ");
    fgets(person2.surname, SC_LENGTH, stdin);
    printf("Date of birth (dd/mm/yyyy): ");
    printf("\n\tDay: ");
    scanf("%d", & person2.DOB.day);
    printf("\tMonth: ");
    scanf("%d", & person2.DOB.month);
    printf("\tYear: ");
    scanf("%d", & person2.DOB.year);


    //(d) Displaying person 2's data 
    printf("\nPerson2's data:\n");
    printf("First name: %s", person2.firstname);
    printf("Surname: %s", person2.surname);
    printf("Date of birth (dd/mm/yyyy): %d/%d/%d", person2.DOB.day, person2.DOB.month, person2.DOB.year);
    printf("\nHeight: %dcm", person2.height);
    printf("\nWeight: %dkg", person2.weight);
    printf("\nEye colour: %s", person2.eye);
    printf("Country of citizenship: %s", person2.country);


    return 0;

} //end main