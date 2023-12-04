//
// Created by danis on 10/8/2023.
//
using namespace std;
#include "iostream"
#ifndef PRACTICE_CPP_PERSON_H
#define PRACTICE_CPP_PERSON_H


class Person {
private:
    int age;
    string name;

public:
    int getAge(); //gets age of person
    string getName(); //gets name of person
    void setName(string name); //sets the name
    void setAge(int age); //sets the age


};


#endif //PRACTICE_CPP_PERSON_H
