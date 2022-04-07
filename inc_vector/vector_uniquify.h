//
// Created by intel on 2022/4/7.
//

#ifndef DSA_VECTOR_UNIQUIFY_H
#define DSA_VECTOR_UNIQUIFY_H

#include "D:\DSA\inc_vector\Vector.h"


template<typename T>
int Vector<T>::uniquify() {
    Rank i = 0, j = 0;
    while (++j < _size)//逐一扫描，直至末元素
        if (_elem[i] != _elem[j])//跳过雷同者
            _elem[++i] = _elem[j];//发现不同元素时，向前移至紧邻与前者右侧
    _size = ++i;//直接截取尾部多余元素
    shrink();
    return j - i;//被删除元素数
}


#endif //DSA_VECTOR_UNIQUIFY_H
