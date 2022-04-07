//
// Created by intel on 2022/4/7.
//

#ifndef DSA_VECTOR_DEDUPLICATE_H
#define DSA_VECTOR_DEDUPLICATE_H

#include "D:\DSA\inc_vector\Vector.h"

template<typename T>
int Vector<T>::deduplicate() {
    int oldSize = _size;
    Rank i = 1;
    while (i < _size)
        (find(_elem[i], 0, i) < 0) ? i++ : remove(i);
    return oldSize - _size;
}


#endif //DSA_VECTOR_DEDUPLICATE_H
