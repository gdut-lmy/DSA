//
// Created by intel on 2022/4/7.
//

#ifndef DSA_VECTOR_SHRINK_H
#define DSA_VECTOR_SHRINK_H

#include "D:\DSA\inc_vector\Vector.h"

template<typename T>
void Vector<T>::shrink() {
    if (_capacity < DEFAULT_CAPACITY << 1)
        return;
    if (_size << 2 > _capacity)
        return;
    T *oldElem = _elem;
    _elem = new T[_capacity >>= 1];
    for (int i = 0; i < _size; i++)
        _elem[i] = oldElem[i];
    delete[] oldElem;
}

#endif //DSA_VECTOR_SHRINK_H
