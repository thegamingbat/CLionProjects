//
// Created by danis on 11/30/2023.
//

#include <iostream>
#include "queue.h"
#include "node.cpp"
#include "node.h"
template<class T>
queue<T> ::queue() {
    front = nullptr;
    back = nullptr;
}
template<class T>
void queue<T>::enqueue(T x) {
    node<T>* n = new node(n);
    if(front == nullptr){
        back = n;  //both point to same
        front= n; // ````````````````
        return;
    }

    back->next = n;//at first back node was pointing null now it will point n node
    back =n;//back will be equal to n node
}
template<class T>
void queue<T>::dequeue() {
   if(front == nullptr){
       std::cout<<"queue underflow";
   }
   node<T>* toDelete = front;
   front = front->next;

   delete toDelete;
}
template<class T>
T queue<T>::peek() {
    if(front == nullptr){
        std::cout<<"no element in queue";
        return -1;
    }
    return front->data;
}
template<class T>
bool queue<T>::empty() {
    if(front == nullptr){
        return true;
    }
    return false;
}
