#include "iostream"
using namespace std;

#include "Person.h"

int Person::getAge() {
    return age;
}
string Person::getName() {
    return name;
}
void Person::setAge(int age) {
    this->age = age;
}
void Person::setName(string name) {
    this ->name = name;
}
