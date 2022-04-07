//
// Created by intel on 2022/4/7.
//

#ifndef DSA_VECTOR_REMOVE_H
#define DSA_VECTOR_REMOVE_H

#include "D:\DSA\inc_vector\Vector.h"

template<typename T>
T Vector<T>::remove(Rank r) {
    T e = _elem[r];
    remove(r, r + 1);
    return e;

}

template<typename T>
int Vector<T>::remove(Rank lo, Rank hi) {
    if (lo == hi)
        return 0;
    while (hi < _size)
        _elem[lo++] = _elem[hi++];
    _size = lo;
    shrink();
    return hi - lo;
}


#endif //DSA_VECTOR_REMOVE_H
