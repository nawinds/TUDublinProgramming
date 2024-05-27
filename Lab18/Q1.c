/*
Program Description:
Author: Nikita Aksenov
Date: 19/03/24
*/
#include <stdio.h>
#define SIZE 50

struct travel_info {
    char airlineName[SIZE];
    char flightNumber[SIZE];
    char passengerSurname[SIZE];
    char seatNumber[SIZE];
    char destination[SIZE];
    int numberOfBags;
};

void enterData();
void displayData();

int main()
{
    struct travel_info travelInfo1;
    struct travel_info travelInfo2;


    return 0;
}   

void enterData(struct travel_info travelInfo1)
{
    travelInfo1.airlineName = "Aer Lingus";
    travelInfo1.flightNumber = "AE234";
    travelInfo1.passengerSurname = "Aksenov";
    travelInfo1.seatNumber = "10C";
    travelInfo1.destination = "London";
    travelInfo1.numberOfBags = 1;
}

void displayData()
{
    printf("%s", )
}