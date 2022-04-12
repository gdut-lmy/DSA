//
// Created by intel on 2022/4/12.
//

#include <iostream>
#include "D:\DSA\inc_list\list.h"
#include "cstdlib"

using namespace std;


int testID=0;

template <typename T> //元素类型
void randomList ( List<T> & list, int n ) { //创建长度为n的列表，其元素随机取自[0, 4n)
    ListNodePosi<T> p =
            ( rand() % 2 )
            ? list.insertAsLast  ( rand() % ( T ) ( n * 4 ) )
            : list.insertAsFirst ( rand() % ( T ) ( n * 4 ) );
    for ( int i = 1; i < n; i++ )
        p = rand() % 2
            ? list.insert ( rand() % ( T ) ( n * 4 ), p )
            : list.insert ( p, rand() % ( T ) ( n * 4 ) );
}

template<typename T>
void printList(List<T> L){

}


template <typename T> //元素类型
void   testList ( int testSize ) {
    printf("\n  ==== Test %2d. Generate a random list with %d elements\n", testID++, testSize);
    List<T> L; randomList(L, testSize);
    printf("\n  ==== Test %2d. Sort it\n", testID++);
    L.sort();
}

int main()
{
    testList<int>(100);
    return 0;
}