//
// Created by danis on 12/4/2023.
//

#ifndef ASSIGNMENT_2_TICKETQUEUE_H
#define ASSIGNMENT_2_TICKETQUEUE_H
#include "node.h"
#include "Ticket.h"


class TicketQueue {
public:
    node* front;
    node* back;
    TicketQueue();
    void enqueue(Ticket);
    Ticket dequeue();
    bool is_empty();
    int get_queue_size();
    void print_queue();



};


#endif //ASSIGNMENT_2_TICKETQUEUE_H
