//
// Created by intel on 2022/4/7.
//

#ifndef DSA_VECTOR_SEARCH_H
#define DSA_VECTOR_SEARCH_H

#include "cstdlib"
#include "D:\DSA\inc_vector\Vector.h"
#include <algorithm>

using namespace std;

template<typename T>
Rank Vector<T>::search(const T &e, Rank lo, Rank hi) const {
    return (rand() % 2) ? //按各50%的概率随机使用二分查找或Fibonacci查找
           binSearch(_elem, e, lo, hi) : fibSearch(_elem, e, lo, hi);
}


#endif //DSA_VECTOR_SEARCH_H
