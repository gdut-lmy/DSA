//
// Created by intel on 2022/4/12.
//

#ifndef DSA_LIST_BRACKET_H
#define DSA_LIST_BRACKET_H

#include "list.h"

template<typename T>
T &List<T>::operator[](Rank r) const {
    ListNodePosi<T> p = first();
    while (0 < r--)
        p = p->succ;
    return p->data;
}


#endif //DSA_LIST_BRACKET_H
