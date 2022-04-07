//
// Created by intel on 2022/4/7.
//

#ifndef DSA_VECTOR_EXPEND_H
#define DSA_VECTOR_EXPEND_H

#include <cstdlib>
#include "D:\DSA\inc_vector\Vector.h"
#include "D:\DSA/inc_vector\vector_search_binary.h"

template<typename T>
void Vector<T>::expand() {
    if (_size < _capacity) return;//尚未满员时不需要扩容
    if (_capacity < DEFAULT_CAPACITY) _capacity = DEFAULT_CAPACITY;
    T *oldElem = _elem;
    _elem = new T[_capacity <<= 1];
    for (int i = 0; i < _size; i++)
        _elem[i] = oldElem[i];
    delete[]oldElem;
}

#endif //DSA_VECTOR_EXPEND_H
