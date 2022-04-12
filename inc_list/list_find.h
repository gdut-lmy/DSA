//
// Created by intel on 2022/4/12.
//

#ifndef DSA_LIST_FIND_H
#define DSA_LIST_FIND_H

#include "list.h"

template<typename T>//在无序列表内节点p(可能是trailer)的n个(真)前驱中，找到等于e的最后者
ListNodePosi<T> List<T>::find(const T &e, int n, ListNodePosi<T> p) const {
    while (0 < n--)//对于p的最近的n个前驱，从右向左
        if (e == (p = p->pred)->data)//逐个对比，直至命中或越界
            return p;
    return nullptr;
}


#endif //DSA_LIST_FIND_H
