//
// Created by danis on 11/30/2023.
//

#ifndef QUEUE_MYVER_NODE_H
#define QUEUE_MYVER_NODE_H
using namespace std;
#include "iostream"
#include "Ticket.h"
class node {
public:





    node(Ticket t);

    Ticket data;
    node* next;




};


#endif //QUEUE_MYVER_NODE_H
