#include "queue.h"
#include <stack>

using namespace std;

template<class T>
Queue<T>::Queue()
    : head(NULL) {}

template<class T>
Queue<T>::~Queue() {
    Node<T>* current = head;
    while (current != NULL) {
        Node<T>* temp = current;
        current = current->getNextPtr();
        delete temp;
    }
}

template<class T>
void Queue<T>::enqueue(T a) {
    Node<T>* temp = new Node<T>(a);
    if (head == NULL) {
        head = temp;
    } else {
        Node<T>* current = head;
        while (current->getNextPtr() != NULL) {
            current = current->getNextPtr();
        }
        current->setNextPtr(temp);
    }
}

template<class T>
T Queue<T>::dequeue() {
    if (head != NULL) {
        T temp_data = head->getData();
        Node<T>* temp = head;
        head = head->getNextPtr();
        delete temp;
        return temp_data;
    }
}

template<class T>
T Queue<T>::peek() {
    if (head != NULL) {
        return head->getData();
    }
}

template<class T>
bool Queue<T>::isEmpty() {
    return head == NULL;
}

template<class T>
int Queue<T>::getSize() {
    int count = 0;
    Node<T>* current = head;
    while (current != NULL) {
        count++;
        current = current->getNextPtr();
    }
    return count;
}





/* 
	FUNCTION TO DISPLAY THE QUEUE ELEMENTS AND THEN COUNT THE NUMBER OF VOWELS IN THOSE ELEMENTS
*/
template<class T>
void Queue<T>::traverseAndCountVowels() {
    Node<T>* current = head;
    int count = 0;

    cout << "Queue elements: ";
    if (head != NULL) {
        do {
            T data = current->getData();
            cout << data << " ";

            if (
            data == 'A' ||
            data == 'E' ||
            data == 'I' ||
            data == 'O' ||
            data == 'U' ||
            data == 'a' ||
            data == 'e' ||
            data == 'i' ||
            data == 'o' ||
            data == 'u'
            )
            {
                count++;
            }

            current = current->getNextPtr();
        } while (current != NULL && current != head);
    }

    cout << "\nNumber of vowels in the Queue: " << count << std::endl;
}





/* 
	FUNCTION TO REVERSE THE ORIGINAL QUEUE
*/
template<class T>
void Queue<T>::reverseQueue() {
    if (head == NULL || head->getNextPtr() == NULL) {
        // Queue is empty or has only one element, no need to reverse
        return;
    }

    Node<T>* prev = NULL;
    Node<T>* current = head;
    Node<T>* next;

    while (current != NULL) {
        next = current->getNextPtr(); // Store the next node.
        current->setNextPtr(prev);    // Reverse the "next" pointer of the current node.
        prev = current;
        current = next; // Move to the next node.
    }

    head = prev; // Update the head to the last node, which is now the first.

}





/* 
	FUNCTION TO CONVERT LINEAR (ORIGINAL) QUEUE TO A CIRCULAR QUEUE
*/
template<class T>
void Queue<T>::convertToCircularQueue() {
    if (head == NULL) {
        return;
    }

    Node<T>* current = head;
    while (current->getNextPtr() != NULL) {
        current = current->getNextPtr();
    }

    current->setNextPtr(head);
}

