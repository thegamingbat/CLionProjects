//
// Created by danis on 11/30/2023.
//
int min(int x, int y) {
    int diff = x - y;
    int mask = (diff >> 31) & 1;
    return x - mask * diff;
}

