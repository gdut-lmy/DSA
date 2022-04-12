//
// Created by intel on 2022/4/12.
//

#ifndef DSA_LIST_SEARCH_H
#define DSA_LIST_SEARCH_H

#include "list.h"

template<typename T>
ListNodePosi<T> List<T>::search(const T &e, int n, ListNodePosi<T> p) const {
    while (0 <= n--)
        if (((p = p->pred)->data) <= e)
            break;
    return p;
}

template<typename T>
ListNodePosi<T> List<T>::selectMax(ListNodePosi<T> p, int n) {
    return nullptr;
}


#endif //DSA_LIST_SEARCH_H
