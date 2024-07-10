/*
Program: Using structures, create a structure to store flight data and using functions only, (a) Enter the travel information for 2 passengers, and (b) Display the data for each passenger
Author: Alison Gleeson
Date: 19/03/2024
*/

#include <stdio.h>

#define A_LENGTH 15
#define SD_LENGTH 22

struct flight
{
    char aName[A_LENGTH];
    int flightNum;
    char surname[SD_LENGTH];
    int seat;
    char destination[SD_LENGTH];
    int bags;
};

void enter(struct flight*);
void display(struct flight);


int main()
{
    struct flight passenger1;
    struct flight passenger2;

    
    //entering data into passenger1 and passenger2
    printf("Enter data for passenger1: \n");
    enter(& passenger1);
    while(getchar() != '\n');
    printf("\nEnter data for passenger2: \n");
    enter(& passenger2);


    //displaying passenger1 and passenger2
    printf("\n\nPassenger1 data: \n");
    display(passenger1);
    printf("\n\nPassenger2 data: \n");
    display(passenger2);


    return 0;
} //end main()


//entering data into a structure variable
void enter(struct flight *ptr)
{

    printf("Enter airline name: ");
    fgets(ptr -> aName, A_LENGTH, stdin);
    printf("Enter flight number: ");
    scanf("%d", & ptr -> flightNum);
    printf("Enter passenger surname: ");
    fgets(ptr -> surname, SD_LENGTH, stdin);
    while(getchar() != '\n');
    printf("Enter seat number: ");
    scanf("%d", & ptr ->seat);
    printf("Enter destination: ");
    fgets(ptr -> destination, SD_LENGTH, stdin);
    while(getchar() != '\n');
    printf("Enter number of bags: ");
    scanf("%d", & ptr -> bags);

} //end enter()


//displaying data in a structure variable
void display(struct flight pass)
{
    printf("Airline name: %s", pass.aName);
    printf("Flight number: %d", pass.flightNum);
    printf("\nPassenger surname: %s", pass.surname);
    printf("Seat number: %d", pass.seat);
    printf("\nDestination: %s", pass.destination);
    printf("Number of bags: %d", pass.bags);
}