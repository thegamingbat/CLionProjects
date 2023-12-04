//
// Created by danis on 11/7/2023.
//

#ifndef LINKLIST_MYVER_NODE_H
#define LINKLIST_MYVER_NODE_H
#include<iostream>
using namespace std ;

template<class T>
class node {
private:
    T data;
    node<T>* nextptr;
public:
    node(T);//set nextPtr to null and initialize the data with the value passed to constructor

    T getData()const;//return the value stored in the data variable

    node<T>* getNextPtr()const;//return the address stored in nextPtr variable

    void setData(T);//set the passed value to the data variable

    void setNextPtr(node*);//set the passed value to the nextPtr variable

    template<class v>
           friend ostream &operator<<(ostream& , node<v>&);
};


#endif //LINKLIST_MYVER_NODE_H
