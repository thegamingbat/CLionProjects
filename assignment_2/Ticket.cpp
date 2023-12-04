//
// Created by danis on 12/3/2023.
//

#include "Ticket.h"

#include <utility>
Ticket::Ticket(std::string desc , int prior) {
    description= std::move(desc);
    ticketID = maxID+1;
    maxID++;
    setPriority(prior);



}



 int Ticket::getPriority(){
     return priority;
}

void Ticket::setPriority(int prior) {
priority = prior;

}

int Ticket::getTicketID()const  {
    return ticketID;
}

string Ticket::getDescription() {
    return description;
}

void Ticket::display() {
    std::cout << "Ticket ID: " << getTicketID() << std::endl;
    std::cout << "Description: " << getDescription() << std::endl;
    std::cout << "priority: " << priority << std::endl;
}
