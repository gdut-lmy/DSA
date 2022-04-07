//
// Created by intel on 2022/4/7.
//

#ifndef DSA_VECTOR_SORT_H
#define DSA_VECTOR_SORT_H

#include "D:\DSA\inc_vector\Vector.h"
#include <algorithm>
#include "D:\DSA\inc_vector\vector_bubble_sort.h"
#include "D:\DSA\inc_vector\vector_merge_sort.h"

template<typename T>
void Vector<T>::sort(Rank lo, Rank hi) {
    mergeSort(lo,hi);
}





#endif //DSA_VECTOR_SORT_H
