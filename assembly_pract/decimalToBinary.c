#include <stdio.h>
void decToBin(int n){
    if(n == 0) return;
    else{
        decToBin(n/2);
        printf("%d" , n% 2);
    }
}


