//
// Created by danis on 11/7/2023.
//

#ifndef UNTITLED1_LINKLIST_H
#define UNTITLED1_LINKLIST_H
#include<iostream>
using namespace std ;
#include "node.h"

template<class T>
class linklist{
private:
int counter;
public:
    node<T> *head;
    linklist();//set head to null and counter to 0

    ~linklist();// ???

    void addElement(T);//add a new node at the end of linked list

    void addElementAt(int, T);//add a new node at specific location(if possible) in linklist

    void deleteElementAt(int);//delete a node at specific location

    void deleteElement(T);//delete a node when find the provided element in linked list

    void findElement (T) const;//return true if provided element exists in linked list

    T getElementAT(int) const;//return the element at provided index

    void updateElementAt (int, T);//update the element at provided node location

    void makeEmpty();//de-allocate all nodes in linked list

    void reverse();
    template<class U>
    friend ostream& operator<<(ostream&,const linklist<U> &) ;//display all nodes' data elements


};

#endif //UNTITLED1_LINKLIST_H
