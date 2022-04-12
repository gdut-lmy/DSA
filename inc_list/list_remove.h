//
// Created by intel on 2022/4/12.
//

#ifndef DSA_LIST_REMOVE_H
#define DSA_LIST_REMOVE_H

#include "list.h"

template<typename T>
T List<T>::remove(ListNodePosi<T> p) {
    T e = p->data;
    p->pred->succ = p->succ;
    p->succ->pred = p->pred;
    delete p;
    _size--;
    return e;
}


#endif //DSA_LIST_REMOVE_H
