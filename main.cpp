#include <iostream>

#include "D:\DSA\inc_vector\Vector.h"
#include "D:\DSA\inc_vector\rand.h"
#include "D:\DSA\inc_vector\vector_bracket.h"
#include "D:\DSA\inc_vector\vector_insert.h"
#include "D:\DSA\inc_vector\vector_sort.h"

int testID=0;

template <typename T> //元素类型
void   testVector ( int testSize ) {
    printf ( "\n  ==== Test %2d. Generate a random vector\n", testID++ );
    Vector<T> V;
    for ( int i = 0; i < testSize; i++ ) V.insert ( dice ( i + 1 ), dice ( ( T ) testSize * 3 ) ); //在[0, 3n)中选择n个数，随机插入向量
    V.sort(0,testSize);
    for(int j =0;j<testSize;j++)
        printf("%d ",V[j]);

}


int main() {

    testVector<int>(10000);


    return 0;
}
