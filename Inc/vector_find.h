//
// Created by intel on 2022/4/7.
//

#ifndef DSA_VECTOR_FIND_H
#define DSA_VECTOR_FIND_H

#include <cstdlib>
#include "../Inc/Vector.h"


template<typename T>
Rank Vector<T>::find(const T &e, Rank lo, Rank hi) const {
    while ((lo < hi--) && (e != _elem[hi]))//逻辑表达式的短路特性 &&前为假时不会 执行&&后语句
        return hi;
}


#endif //DSA_VECTOR_FIND_H
