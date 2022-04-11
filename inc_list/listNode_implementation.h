//
// Created by intel on 2022/4/11.
//

#ifndef DSA_LISTNODE_IMPLEMENTATION_H
#define DSA_LISTNODE_IMPLEMENTATION_H

#include "listNode.h"

template<typename T>
ListNodePosi<T> ListNode<T>::insertAsPred(const T &e) {
    auto x = new ListNode(e, pred, this);
    pred->succ = x;
    pred = x;
    return x;
}

template<typename T>
ListNodePosi<T> ListNode<T>::insertAsSucc(const T &e) {
    auto x = new ListNode(e, this, succ);
    succ->pred = x;
    succ = x;
    return x;
}


#endif //DSA_LISTNODE_IMPLEMENTATION_H
