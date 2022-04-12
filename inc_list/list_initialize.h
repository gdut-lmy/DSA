//
// Created by intel on 2022/4/12.
//

#ifndef DSA_LIST_INITIALIZE_H
#define DSA_LIST_INITIALIZE_H

#include "list.h"

template<typename T>
void List<T>::init() {
    header = new ListNode<T>;
    trailer = new ListNode<T>;
    header->succ = trailer;
    header->pred = nullptr;
    trailer->pred = header;
    trailer->succ = nullptr;
    _size = 0;
}




#endif //DSA_LIST_INITIALIZE_H
