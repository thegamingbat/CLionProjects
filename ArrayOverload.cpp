//
// Created by danis on 10/10/2023.
//
using namespace std;
#include "iostream"
class ArrayOverload{
private:int size;
public:
    int* arr = new int[getSize()];
    void setSize(int size){
        this->size = size;
    }
    int getSize(){
        return size;
    }
    void fill(){
        for(int i = 0;i<getSize();i++ ){
            cin>>arr[i];
        }
    }
    friend ostream &operator <<(ostream os , const ArrayOverload obj){

    }
};