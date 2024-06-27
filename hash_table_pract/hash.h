//
// Created by danis on 6/8/2024.
//
#include <iostream>

using namespace std;
#ifndef HASH_TABLE_PRACT_HASH_H
#define HASH_TABLE_PRACT_HASH_H


class Hash {
private:
   static const int tableSize = 10;
    struct item {
        string name;
        string drink;
        item* next;
    };

    item* Hashtable[tableSize];
public:
    Hash();
    int create_Hash(string key);//changes a string to interger that is the index number
    void addItem(string name,string drink);



};


#endif //HASH_TABLE_PRACT_HASH_H
