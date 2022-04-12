//
// Created by intel on 2022/4/12.
//

#ifndef DSA_LIST_TRAVERSE_H
#define DSA_LIST_TRAVERSE_H

#include "list.h"

template<typename T>
template<typename VST>
void List<T>::traverse(VST &visit) {
    for (ListNodePosi<T> p = header->succ; p != trailer; p = p->succ)
        visit(p->data);

}

#endif //DSA_LIST_TRAVERSE_H
