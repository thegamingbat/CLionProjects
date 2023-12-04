//
// Created by danis on 12/4/2023.
//
#include "Ticket.h"
#include "TicketQueue.h"
TicketQueue::TicketQueue() {
    front =nullptr;
    back = nullptr;
}

void TicketQueue::enqueue(Ticket t) {
    node* n = new node(t);
    //if nothin in queue
    if (front == NULL) {
        back = n;
        front = n;
        return;
    }

    // Check priority of the new ticket
    int newTicketPriority = t.getPriority();

    //  If the new ticket has higher priority than the front ticket, insert it at the front
    if (newTicketPriority < front->data.getPriority()) {
        n->next = front;
        front = n;
        return;
    }

    // Traversin the queue to find the  position based on priority
    node* current = front;
    while (current->next != NULL/*there is some element after current*/
    && newTicketPriority >= current->next->data.getPriority()
    /* current node priorty is either greater or equal to next node priority*/) {
        current = current->next;
    }

    // Insert the new node after the current node
    n->next = current->next;
    current->next = n;

    // If  new node is at the end, updates the back pointer
    if (n->next == NULL) {
        back = n;
    }
}

Ticket TicketQueue::dequeue() {
    if (front == NULL) {
        // Returning a "dummy" ticket with priority set to a large value
        return Ticket("Empty Queue", 2000);
    }
    // Get the ticket at the front
    Ticket removedTicket = front->data;
    node* toDelete = front;
    front = front->next;
    delete toDelete;
    // Update back pointer if the queue is now empty(had only one ticket in it
    if (front == NULL) {
        back = NULL;
    }
    return removedTicket;

}

bool TicketQueue::is_empty() {
    if(front==NULL && back == NULL){
        return true;
    } return false;
}
int TicketQueue::get_queue_size() {
    int counter =0;
    node* current = front;
    while (current != NULL){
        current = current->next;
        counter++;
    }
    return counter;
}
void TicketQueue::print_queue() {
    node* current = front;
    while (current != NULL){
        current->data.display();

        current = current->next;

    }
}


