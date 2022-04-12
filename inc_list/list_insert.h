//
// Created by intel on 2022/4/12.
//

#ifndef DSA_LIST_INSERT_H
#define DSA_LIST_INSERT_H

#include "listNode.h"
#include "list_implementation.h"

template<typename T>
ListNodePosi<T> List<T>::insertAsFirst(const T &e) {
    _size++;
    return header->insertAsSucc(e);
}

template<typename T>
ListNodePosi<T> List<T>::insertAsLast(const T &e) {
    _size++;
    return trailer->insertAsPred(e);
}

template<typename T>
ListNodePosi<T> List<T>::insert(ListNodePosi<T> p, const T &e) {
    _size++;
    return p->insertAsSucc(e);
}

template<typename T>
ListNodePosi<T> List<T>::insert(const T &e, ListNodePosi<T> p) {
    _size++;
    return p->insertAsPred(e);
}

#endif //DSA_LIST_INSERT_H
