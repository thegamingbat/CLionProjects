#include <iostream>
#include "stdlib.h"

struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty_stckarr(struct stack p){
    if(p.top==-1)
        return 1;
    else return 0;
}
int isFull_stckarr(struct stack p){
    if(p.size-1==p.top)
        return 1;
    else return 0;
}
void push_stckarr(){
    
}


int main() {
    struct stack s;
    s.size = 80;
    s.top = -1;
    s.arr = (int*) malloc(s.size * sizeof(int)); //allocates memory dynamically part of stdlib.h
    isEmpty_stckarr(s);
    return 0;
}
