//
// Created by intel on 2022/4/7.
//

#ifndef DSA_VECTOR_BRACKET_H
#define DSA_VECTOR_BRACKET_H

#include "D:\DSA\Inc\Vector.h"

template<typename T>
T &Vector<T>::operator[](Rank r) {
    return _elem[r];
}

template<typename T>
const T &Vector<T>::operator[](Rank r) const {
    return _elem[r];
}


#endif //DSA_VECTOR_BRACKET_H
