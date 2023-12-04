#include<iostream>
#include "linklist.h"
using namespace std;


template<class T>
Linklist<T> :: Linklist()
{
	counter = 0;
	head = NULL;
}



template<class T>
void Linklist<T>::addElement(T a) {
    Node<T>* newNode = new Node<T>(a);
    Node<T>* current = head;
    Node<T>* previous = NULL;

    while (current != NULL && a.getAggregate() <= current->getData().getAggregate())
	{
        previous = current;
        current = current->getNextPtr();
    }

    if (previous == NULL)
	{
        newNode->setNextPtr(head);
        head = newNode;
    }
    else
	{
        newNode->setNextPtr(current);
        previous->setNextPtr(newNode);
    }
}



template<class T>
void Linklist<T>::MeritList(int numCandidates)
{
    if (head == NULL)
	{
        cout << "Empty" << endl;
        return;
    }

    Node<T>* current = head;
    int count = 0;

    cout << " Merit Of Top " << numCandidates << " Participators :" << endl << endl;

    while (current != NULL && count < numCandidates)
	{
        cout << current->getData().getName() << " - Total Aggregate : " << current->getData().getAggregate() << endl;
        current = current->getNextPtr();
        count++;
    }
}



template<class T>
void Linklist<T> :: deleteElementAt(int ind)
{
	if(head == NULL)
	{
		cout<<"List Empty";
	}
	else if((ind <= 0) || (ind > counter+1))
	{
		cout<<"Index Invalid";
	}
	else if(ind == 1)
	{
		Node<T> *current = head;
		head = current->getNextPtr();
		counter--;
		delete current;
		return ;
	}
	else if(ind == counter)
	{
		Node<T> *current = head;
		Node<T> *previous = NULL;
		while(current->getNextPtr() != NULL)
		{
			previous = current;
			current = current->getNextPtr();
		}
		previous->setNextPtr(NULL);
		counter--;
		delete current;
		return ;
	}
	else
	{
		Node<T> *current = head;
		Node<T> *previous = NULL;
		for(int i =1; i < ind; i++)
		{
			previous = current;
			current = current->getNextPtr();
		}
		previous->setNextPtr(current->getNextPtr());
		counter--;
		delete current;
		return ;
	}
}



template<class T>	
void Linklist<T> :: deleteElement(T d)
{
	
	if(head == NULL)
	{
		cout<<"List Empty";
	}
	else if(d == (head->getData()))
	{
		Node<T> *current = head;
		head = head->getNextPtr();
		delete current;
		return ;
	}
	
	else
	{
		Node<T> *current = head;
		Node<T> *previous;
		while(current->getNextPtr() != NULL)
		{
			previous = current;
			current = current->getNextPtr();
			if(d == (current->getData()))
			{
				previous->setNextPtr(current->getNextPtr());
				counter--;
				delete current;
				return ;
			}
			
		}
	}
	 return ;
}



template<class T> bool Linklist<T>::findElement(T a)
	{
    if (head == NULL)
	{
        cout << "List Empty" << endl;
        return false;
    }

    Node<T>* left = head;
    Node<T>* right = NULL;
    int length = 0;

    Node<T>* temp = head;
    while (temp != NULL) {
        temp = temp->getNextPtr();
        length++;
    }

    right = head;

    while (left != right)
	{
        int mid = length / 2;
        Node<T>* midNode = left;
        for (int i = 0; i < mid; i++)
		{
            midNode = midNode->getNextPtr();
        }

        if (a.getAggregate() >= midNode->getData().getAggregate())
		{
            left = midNode->getNextPtr();
            length -= mid + 1;
        } else {
            right = midNode;
            length = mid;
        }
    }

    // Checking the final node
    if (left != NULL && a.getAggregate() == left->getData().getAggregate())
	{
        cout << "Student Available" << endl;
        return true;
    }

    cout << "\n" << "Student Not Available" << endl;
    return false;
}



template<class T>	
T Linklist<T> :: getElementAT(int ind) const
{
	if(head == NULL)
	{
		return 0;
	}
	else if((ind <= 0) || (ind > counter))
	{
		return 0;
	}
	else if(ind == 1)
	{
		return (head->getData());
	}
	else
	{
		Node<T> *current = head;
		for(int i = 2; i <= ind; i++)
		{
			current = current->getNextPtr();
		}
		return (current->getData());
	}
}



template<class T>	
void Linklist<T> :: updateElementAt (int ind, T d)
{
	if(head == NULL)
	{
		cout<<"List Empty";
	}
	else if((ind <= 0) || (ind > counter))
	{
		cout<<"Index Invalid";
	}
	else if(ind == 1)
	{
		head->setData(d);
		return ;
	}
	else
	{
		Node<T> *current = head;
		for(int i = 2; i <= ind; i++)
		{
			current = current->getNextPtr();
		}
		current->setData(d);
		return ;
	}
}



template<class T>	
Linklist<T> ::~Linklist()
{
	makeEmpty();
}



template<class T>	
void Linklist<T> :: makeEmpty()
{
	if(head != NULL)
	{
		Node<T> *current = head;
		Node<T> *previous;
		while(current->getNextPtr() != NULL)
		{
			previous = current;
			current = current->getNextPtr();
			delete previous;
		}
		delete current;
		counter = 0;
		head = NULL;
	}
}



template <class U>
ostream& operator<<(ostream &out,const Linklist<U> &d)
{
	Node<U> *current = d.head;
	while(current != NULL)
	{
		out << *(current) << " ";
		current = current->getNextPtr();
	}

	return out;
}
