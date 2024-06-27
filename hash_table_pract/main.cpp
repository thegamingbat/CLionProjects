#include <iostream>
#include "string"
using namespace std;
#include "hash.h"

int main() {
    Hash hashObj;
    int index;
    index = hashObj.create_Hash("Danish");
    cout << "index = " << index << endl;
}
