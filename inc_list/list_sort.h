//
// Created by intel on 2022/4/12.
//

#ifndef DSA_LIST_SORT_H
#define DSA_LIST_SORT_H

#include "list.h"



template<typename T>
void List<T>::sort(ListNodePosi<T> p, int n) {
    insertionSort(p,n);
}

template<typename T>
ListNodePosi<T> List<T>::merge(ListNodePosi<T>, int, List<T> &, ListNodePosi<T>, int) {
    return nullptr;
}

template<typename T>
void List<T>::mergeSort(ListNodePosi<T> &, int) {

}

template<typename T>
void List<T>::selectionSort(ListNodePosi<T>, int) {

}

template<typename T>
void List<T>::insertionSort(ListNodePosi<T> p, int n) {
    for(int r=0;r<n;r++){
        insert(search(p->data,r,p),p->data);
        p=p->succ;
        remove(p->pred);
    }
}

template<typename T>
void List<T>::radixSort(ListNodePosi<T>, int) {

}



#endif //DSA_LIST_SORT_H
