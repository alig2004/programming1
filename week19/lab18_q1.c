/*
Program: Structure template practice
Author: Alison Gleeson
Date: 12/03/2024
*/

struct card
{
    char number[6];
    char suit[9]
};

struct stock_rec
{
    int stock_num;
    char description[20];
    int quantity;
};

struct lib_record
{
    char ISBN[13];
    char title[30];
    char author[24];
    float price;
};

struct customer_rec
{
    unsigned int number;
    char name[25];
    char address[45];
    double balance_out;
};

struct transaction_rec
{
    char type;
    int day;
    int month;
    int year;
    float amount;
};

struct time
{
    int hours;
    int minutes;
    int seconds;
    char time[3];
};

struct long_lat
{
    int degrees;
    int minutes;
    char direction;
};

struct team_rec
{
    char name[20];
    int wins_away;
    int wins_home;
    int draws_away;
    int draws_home;
    int losses_away;
    int losses_home;
};