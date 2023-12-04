#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include<iostream>
using namespace std ;



template<class T>
class Node
{
	private:
		T data;
		Node<T>* nextPtr;
		
     public:

      
		Node(T);//set nextPtr to null and initialize the data with the value passed to constructor
     
		T getData();//return the value stored in the data variable
	
		Node<T>* getNextPtr()const;//return the address stored in nextPtr variable
	
		void setData(T);//set the passed value to the data variable
	
		void setNextPtr(Node*);//set the passed value to the nextPtr variable
	
template<class v>
	friend ostream &operator<<(ostream& , Node<v>& );// displays the value stored in data
};

#endif
