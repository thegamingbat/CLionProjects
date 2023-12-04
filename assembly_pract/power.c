//
// Created by danis on 11/30/2023.
//
int isPowerOfTwo(int x) {
    return x && !(x & (x - 1));
}
