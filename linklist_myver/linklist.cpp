//
// Created by danis on 11/7/2023.
//
#include "linklist.h"
template<class T>
linklist<T> ::linklist() {
    counter = 0;
    head = NULL;
}
template<class T>
void linklist<T>::addElement(T d) {



}
template<class T>
void linklist<T>::addElementAt(int index, T data) {
    auto* temp = new node<T>(data);
    if(index <0 || index > counter+1
    /* if value more than
 * counter can
 * be added but value
 * more than counter+1
 * cant be
 * added leaves a space open*/ ){
        cout<< " out of bounds index";
}else if (index == 0) // first element
    {
        temp->setNextPtr(NULL);
        head = temp;
        counter++;

    }
    else if (index == counter+1)//add after last element
    {		node<T> *current = head;
        while(current->getNextPtr()!=NULL) //goes to last element of list
        {
            current = current->getNextPtr();

        }
        current->setNextPtr(temp);
        temp->setNextPtr(NULL);
        counter++;


    }
    else //add in middle
    {

    }
}
