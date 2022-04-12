//
// Created by intel on 2022/4/12.
//

#ifndef DSA_LIST_CONSTRUCTOR_BY_COPYING_H
#define DSA_LIST_CONSTRUCTOR_BY_COPYING_H

#include "list.h"

template<typename T>
List<T>::List(const List<T> &L) {
    copyNodes(L.first(), L._size);
}

template<typename T>
List<T>::List(const List<T> &L, Rank r, int n) {
    ListNodePosi<T> p = L.first();
    while (0 < r--)
        p = p->succ;
    copyNodes(p, n);
}

template<typename T>
List<T>::List(ListNodePosi<T> p, int n) {
    copyNodes(p, n);
}

#endif //DSA_LIST_CONSTRUCTOR_BY_COPYING_H
