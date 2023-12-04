#include <iostream>

int getSizeOfArray(int arr[]) {
    return sizeof(arr) / sizeof(arr[0]);
}
int reverse(int a[]){
    int size = sizeof(a) / sizeof(a[0]);
    int j = size-1 ;
    int i = 0;
    while(i <size){
        std::swap(a[i],a[j]);
        i++;j--;
        if(i == j){
            return *a;
        }


    }
    return *a;

}



int main() {
    int n;
    std::cin>>n;
    int *b = new int[n];
    for(int i = 0; i<n;i++){
        b[i]= i+1;
    }

    getSizeOfArray(b);

return 0;
}
