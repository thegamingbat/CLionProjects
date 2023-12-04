#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include "node.h"
#include <iostream>

template<class T>
class Queue {
private:
    Node<T>* head;
public:
    Queue();
    ~Queue();
    void enqueue(T);
    T dequeue();
    T peek();
    bool isEmpty();
    void traverseAndCountVowels();
    void reverseQueue();
    void convertToCircularQueue();
    int getSize();
};

#include "queue.cpp"

#endif

