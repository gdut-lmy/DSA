//
// Created by intel on 2022/4/6.
//

#ifndef DSA_VECTOR_SEARCH_BINARY_H
#define DSA_VECTOR_SEARCH_BINARY_H

#include "D:\DSA\inc_vector\Vector.h"

template<typename T>
static Rank binSearch(T *S, T const &e, Rank lo, Rank hi) {//在有序向量的区间[lo,hi)内查找元素e，0<=lo<=hi<=_size
    while (lo < hi) {//每次迭代仅需做一次比较判断，有两个分支
        Rank mi = (lo + hi) >> 1;//以中心为轴点
        (e < S[mi]) ? hi = mi : lo = mi + 1;//经比较确定深入[lo,mi)或(mi,hi)
    }//成功查找不能提前终止
    return lo - 1;//循环结束时，lo为大于e的元素的最小秩，故lo-1即不大于e的元素的最大秩
}//有多个元素命中时，总能保证返回秩的最大值；查找失败时能返回失败的位置

#endif //DSA_VECTOR_SEARCH_BINARY_H

