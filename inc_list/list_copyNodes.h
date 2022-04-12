//
// Created by intel on 2022/4/12.
//

#ifndef DSA_LIST_COPYNODES_H
#define DSA_LIST_COPYNODES_H

#include "list.h"

template<typename T>
void List<T>::copyNodes(ListNodePosi<T> p, int n) {
        init();
    while (n--){
        insertAsLast(p->data);
        p=p->succ;
    }

}


#endif //DSA_LIST_COPYNODES_H
