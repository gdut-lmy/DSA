//
// Created by intel on 2022/4/7.
//

#ifndef DSA_VECTOR_BUBBLE_SORT_H
#define DSA_VECTOR_BUBBLE_SORT_H

#include "D:\DSA\inc_vector\Vector.h"
#include <algorithm>



template<typename T>
void Vector<T>::bubbleSort(Rank lo, Rank hi) {//最坏情况O(n^2)
    for(Rank last=--hi;lo<hi;hi=last)
        for(Rank i=last=lo;i<hi;i++){
            if(_elem[i]>_elem[i+1])
                std::swap(_elem[last=i],_elem[i+1]);
        }
}


#endif //DSA_VECTOR_BUBBLE_SORT_H
