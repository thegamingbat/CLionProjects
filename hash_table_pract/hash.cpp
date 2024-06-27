//
// Created by danis on 6/8/2024.
//
#include <iostream>

using namespace std;
#include "hash.h"

Hash::Hash() {

    for (int i = 0; i < tableSize; ++i) {
        Hashtable[i] =  new item;
        Hashtable[i] -> name = "empty";
        Hashtable[i] -> drink = "empty";
        Hashtable[i] -> next = nullptr;

    }
}
 int Hash::create_Hash(std::string key) {
    int hash = 0;
    int index;
    index = key.length();
     for (int i = 0; i < index; ++i) {
         hash = hash + (int)key[i];
         cout << "hash = " << hash << endl;

     }
     index = hash % tableSize;
     return index;
}
void Hash::addItem(std::string name, std::string drink) {
    int index = create_Hash(name);
    if(Hashtable[index]->name == "empty"){
        Hashtable[index]->name = name;
        Hashtable[index]->drink = drink;


    }else {
        item* ptr = Hashtable[index];
        item* n = new item;
        n-> name = name;
        n -> drink = name;
        n->next = nullptr;
        while(ptr -> next != nullptr){
            ptr = ptr->next;
        }
        ptr->next   = n;
    }
}
