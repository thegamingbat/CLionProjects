//
// Created by danis on 11/28/2023.
//
#include "stdio.h"
void and(unsigned int x , unsigned int y){
    printf("0x%x\n", x & y);


}
void or(unsigned int x , unsigned int y){
    printf("0x%x\n", x | y);

}
void not(unsigned int x ){
    printf("0x%x\n", ~x  );

}

