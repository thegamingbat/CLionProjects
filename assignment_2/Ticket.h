//
// Created by danis on 12/3/2023.
//
#include <iostream>
using namespace std;

#ifndef ASSIGNMENT_2_TICKET_H
#define ASSIGNMENT_2_TICKET_H


class Ticket {
private:
    int ticketID,maxID=0;
    string description;
    int priority{};
public:
    Ticket(string desc , int prior);
    void initializeTicketID();
    int getTicketID() const;
    void setPriority(int priority);
    string getDescription();
     int getMaxID();
    void display();


    int getPriority();
};


#endif //ASSIGNMENT_2_TICKET_H
