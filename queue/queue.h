//
// Created by danis on 11/11/2023.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H
#include "node.h"

template<class T>
        class queue {
        private:
            node<T> *front;
            node<T> *back;
        public:
             queue(T );
            void setFront(T front);
            void setBack(T back);

            void enqueue(T element); // adds element after back element and point back to it
            void dequeue(); //gets the back element and removes it form queue
            T peek(); // gives front value
            void empty();// checks if queue is empty or not

    };




#endif //QUEUE_QUEUE_H
