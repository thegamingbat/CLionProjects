//
// Created by danis on 12/17/2023.
//
#include "stdio.h"
typedef unsigned char *byte_ptr;
void show_bytes(byte_ptr start , int len){
    for(int i =0;i<len;i++){
        printf("%.2x" , start[i]);
    }
    printf("\n");
}

