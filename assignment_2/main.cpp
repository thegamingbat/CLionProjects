#include <iostream>
#include "Ticket.h"
#include "TicketQueue.h"

int main() {
    // Create a ticket queue
    TicketQueue ticketQueue;

    // Enqueue some tickets
    Ticket t1("Bug in classic right click", 3);
    Ticket t2("high ping issue issue", 2);
    Ticket t3("Server crash behrain", 1);

    ticketQueue.enqueue(t1);
    ticketQueue.enqueue(t2);
    ticketQueue.enqueue(t3);

    // Print the queue
    std::cout << "Queue after enqueue:" << std::endl;
    ticketQueue.print_queue();
    std::cout << "Queue size: " << ticketQueue.get_queue_size() << std::endl;

    // Dequeue a ticket
    Ticket removedTicket = ticketQueue.dequeue();
    std::cout << "\nDequeued Ticket:" << std::endl;
    removedTicket.display();

    // Print the queue after dequeue
    std::cout << "\nQueue after dequeue:" << std::endl;
    ticketQueue.print_queue();
    std::cout << "Queue size: " << ticketQueue.get_queue_size() << std::endl;

    // Enqueue another ticket
    Ticket t4("New agent request", 4);
    ticketQueue.enqueue(t4);

    // Print the queue after another enqueue
    std::cout << "\nQueue after enqueue:" << std::endl;
    ticketQueue.print_queue();
    std::cout << "Queue size: " << ticketQueue.get_queue_size() << std::endl;

    return 0;
}
