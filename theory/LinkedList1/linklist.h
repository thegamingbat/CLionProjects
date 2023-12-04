#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED

#include<iostream>
#include "node.h"
using namespace std;



template<class T>
class Linklist
{
	private:
		int counter;
		Node<T> *head;
	
	
	public:
		Linklist();//set head to null and counter to 0
		
		~Linklist();// ???
		
		void addElement(T a);//add a new node at the end of linked list
		
		void addElementAt(int, T);//add a new node at specific location(if possible) in linklist
		
		void deleteElementAt(int);//delete a node at specific location
		
		void deleteElement(T);//delete a node when find the provided element in linked list
		
		T getElementAT(int) const;//return the element at provided index
		
		void updateElementAt (int, T);//update the element at provided node location
		
		void makeEmpty();//de-allocate all nodes in linked list

        void MeritList(int numCandidates);

        bool findElement(T a);

    template<class U>
	friend ostream& operator<<(ostream&,const Linklist<U> &) ;//display all nodes' data elements	
};

#endif
