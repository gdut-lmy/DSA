//
// Created by intel on 2022/4/12.
//

#ifndef DSA_LIST_DEDUPLICATE_H
#define DSA_LIST_DEDUPLICATE_H

#include "list.h"

template<typename T>
int List<T>::deduplicate() {
    if (_size < 2) return 0;
    int oldSize = _size;
    ListNodePosi<T> p = header;
    Rank r = 0;
    while (trailer != (p = p->succ)) {
        ListNodePosi<T> q = find(p->data, r, p);//在p的r个前驱中查找雷同者
        q ? remove(q) : r++;//若的确存在，则删除，否则秩加一
    }
    return oldSize - _size;//列表规模变化量，即被删除元素数
}


#endif //DSA_LIST_DEDUPLICATE_H
