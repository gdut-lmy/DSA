//
// Created by intel on 2022/4/7.
//

#ifndef DSA_VECTOR_MERGE_SORT_H
#define DSA_VECTOR_MERGE_SORT_H

#include "D:\DSA\inc_vector\Vector.h"


template<typename T>
void Vector<T>::merge(Rank lo, Rank mi, Rank hi) {
    T *A = _elem + lo;
    int lb = mi - lo;
    T *B = new T[lb];
    for (Rank i = 0; i < lb; i++)
        B[i]=A[i];
    int lc = hi - mi;
    T *C = _elem + mi;
    Rank i = 0, j = 0, k = 0;
    while ((j < lb) && (k < lc)) //反复地比较B、C的首元素
        A[i++] = (B[j] <= C[k]) ? B[j++] : C[k++]; //将更小者归入A中
    while (j < lb) //若C先耗尽，则
        A[i++] = B[j++]; //将B残余的后缀归入A中——若B先耗尽呢？
    delete[] B;
}


template<typename T>
void Vector<T>::mergeSort(Rank lo, Rank hi) {
    if (hi - lo < 2) return;
    int mi = (lo + hi) / 2;
    mergeSort(lo, mi);
    mergeSort(mi, hi);
    merge(lo, mi, hi);
}


#endif //DSA_VECTOR_MERGE_SORT_H
