//
// Created by intel on 2022/4/12.
//

#ifndef DSA_LIST_UNIQUIFY_H
#define DSA_LIST_UNIQUIFY_H

#include "list.h"

template<typename T>
int List<T>::uniquify() {
    if (_size < 2) return 0;
    int oldSize = _size;
    ListNodePosi<T> p = first();
    ListNodePosi<T> q;
    while (trailer != (q = p->succ))//反复考查紧邻的节点对（p,q）
        if (p->data != q->data)//若互异，则转向下一区段
            p = q;
        else remove(q);//雷同，删除后者
    return oldSize - _size;
}


#endif //DSA_LIST_UNIQUIFY_H
