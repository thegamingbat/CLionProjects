//
// Created by danis on 11/7/2023.
//

#include "node.h"
template<class T>
node<T> ::node(T a) {
 data = a;
 nextptr = NULL;

}
template<class T>
T node<T>::getData() const {
    return data;
}
template<class T>
node<T>* node<T>::getNextPtr() const {
    return nextptr;
}
template<class T>
void node<T>::setData(T a) {
    data = a;
}
template<class T>
void node<T>::setNextPtr(node<T> *ptr) {
    nextptr = ptr;
}
template<class v>
ostream &operator<<(ostream &out , node<v>& n ){
out << (n.getData());
return out;
}