//
// Created by intel on 2022/4/12.
//

#ifndef DSA_LIST_DESTRUCTOR_H
#define DSA_LIST_DESTRUCTOR_H

#include "list.h"

template<typename T>
List<T>::~List() {
    clear();
    delete header;
    delete trailer;
}

template<typename T>
int List<T>::clear() {
    int oldSize = _size;
    while (0 < _size)
        remove(header->succ);
    return oldSize;
}


#endif //DSA_LIST_DESTRUCTOR_H
