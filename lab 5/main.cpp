

#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    Queue<char> q;
    q.enqueue('d');
    q.enqueue('a');
    q.enqueue('n');
    q.enqueue('i');
    q.enqueue('s');
    q.enqueue('h');
    q.enqueue('m');
    q.enqueue('a');
    q.enqueue('n');
    q.enqueue('s');
    q.enqueue('o');
    q.enqueue('o');
    q.enqueue('r');



    cout << "Original Queue:" << endl;
    q.traverseAndCountVowels();

    cout << "\nAfter Reversing Original Queue" << endl;
    q.reverseQueue();
    q.traverseAndCountVowels();

    q.convertToCircularQueue();
}

