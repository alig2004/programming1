/*
Program: Given the struct template for stock_record, (a) assign a vlue to each member of the struct variable stock_item, (b) input a value to each member of stock_item, and (c) display each member of stock_item
Author: Alison Gleeson
Date: 12/03/2024
*/


#include <stdio.h>
#include <string.h>

#define SIZE 21

struct stock_record
{
    int no;
    char description[SIZE];
    float price;
    int qty;
};

void display(struct stock_record);
void enter(struct stock_record *);


int main()
{
    struct stock_record stock_item =    {
                                            1234, 
                                            "Flatpack wardrobe\n", 
                                            12.75, 
                                            5
                                        };

    display(stock_item);


    enter(&stock_item);


    display(stock_item);

    return 0;
}


//displaying data contained in structure variables
void display(struct stock_record stock)
{

    printf("\n\n");

    //displaying stock number
    printf("Stock number: %d\n", stock.no);

    //displaying stock description
    printf("Description: %s", stock.description);

    //displaying price
    printf("Price: %.2f\n", stock.price);

    //displaying quantity
    printf("Quantity: %d\n", stock.qty);

} //end display()


//displaying data contained in structure variables
void enter(struct stock_record *ptr)
{

    //entering stock number
    printf("Enter stock number: ");
    scanf("%d", & ptr -> no);

    //clear stdin buffer so enter isn't read
    while(getchar() != '\n');

    //entering stock description
    printf("Enter description: ");
    fgets(ptr -> description, SIZE, stdin);

    //entering price
    printf("Enter price: ");
    scanf("%f", & ptr -> price);

    //entering quantity
    printf("Enter quantity: ");
    scanf("%d", & ptr -> qty);

} //end display()