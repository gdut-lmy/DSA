//
// Created by intel on 2022/4/7.
//

#ifndef DSA_VECTOR_CONSTRUCTOR_BY_COPYING_H
#define DSA_VECTOR_CONSTRUCTOR_BY_COPYING_H

#include "D:\DSA\Inc\Vector.h"

template<typename T>
void Vector<T>::copyFrom(const T *A, Rank lo, Rank hi) {//以数组A[lo,hi)为蓝本复制向量
    _elem = new T[_capacity = 2 * (hi - lo)];//分配空间
    _size = 0;//向量规模清零
    while (lo < hi)//A[lo, hi)内的元素逐一
        _elem[_size++] = A[lo++];//复制至_elem[0, hi - lo)
}



#endif //DSA_VECTOR_CONSTRUCTOR_BY_COPYING_H
