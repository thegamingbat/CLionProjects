#include<iostream>
#include "node.h"
using namespace std;



template<class T>

Node<T> :: Node (T a)
{
	data = a;
	nextPtr = NULL;
}



template<class T>
void Node<T> :: setData(T a)
{
	data = a;
}



template<class T>
void Node<T> :: setNextPtr (Node<T> *p)
{
	nextPtr = p;
}



template<class T>
T Node<T> :: getData()
{
	return data;
}



template<class T>
Node<T> * Node<T> :: getNextPtr() const
{
	return nextPtr;
}



template<class v>
ostream &operator<<(ostream &out, Node<v> &p)
{
	out << (p.getData());
	return out;
}

