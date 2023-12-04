#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

template<class T>
class Node {
public:
    Node(T);
    T getData() const;
    Node<T>* getNextPtr() const;
    void setData(T);
    void setNextPtr(Node*);
private:
    T data;
    Node<T>* nextPtr;
};

#include "node.cpp" 

#endif

