//
// Created by danis on 11/30/2023.
//

#ifndef QUEUE_MYVER_QUEUE_H
#define QUEUE_MYVER_QUEUE_H
#include "../assignment_2/node.cpp"
#include "../assignment_2/node.h"
template<class T>
class queue {
public:
    node<T>* front ;
    node<T>*  back;
    queue();
    void enqueue(T n);
    void dequeue();
    T peek();
    bool empty();




};


#endif //QUEUE_MYVER_QUEUE_H
