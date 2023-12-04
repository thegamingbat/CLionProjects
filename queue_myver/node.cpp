//
// Created by danis on 11/30/2023.
//

#include "node.h"
template<class t>
node<t>::node(t val){
    data = val;
    next= nullptr;
}