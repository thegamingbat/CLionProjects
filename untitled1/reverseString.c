#include "stdio.h"
#include "string.h"
#include "stdlib.h"



char* reverseString(const char* str){
    //lenght of string usin string.h
    int len = strlen(str);
    //dynamically making an array of char named reverse with plus one size
    char* reversed = (char*) malloc((len+1)* sizeof(char));
    //checking if malloc was success or nah
    if(reversed==NULL){
        fprintf(stderr , "memory alloc failed");
        exit(1);
    }
      //reversing
    for (int i = 0; i < len; ++i) {
        reversed[i] = str[len -i - 1];
        
    }
}
void main(int arg , char *argv[]){

}