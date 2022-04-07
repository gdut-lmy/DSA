//
// Created by intel on 2022/4/7.
//

#ifndef DSA_VECTOR_ASSIGNMENT_H
#define DSA_VECTOR_ASSIGNMENT_H

#include "D:\DSA\inc_vector\Vector.h"

template<typename T>
Vector<T> &Vector<T>::operator=(const Vector<T> &V) {
    if (_elem)
        delete[]_elem;//释放原有内容
    copyFrom(V._elem, 0, V._size);//整体复制
    return *this;//返回当前对象的引用，以便链式存储
}

#endif //DSA_VECTOR_ASSIGNMENT_H
