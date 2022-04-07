//
// Created by intel on 2022/4/7.
//

#ifndef DSA_RAND_H
#define DSA_RAND_H

#include <cstdlib>
#include <ctime> //通常用当前时刻设置随机种子

/******************************************************************************************
 * 在[0, range)内随机生成一个数
 ******************************************************************************************/
static int dice ( int range ) { return rand() % range; } //取[0, range)中的随机整数
static int dice ( int lo, int hi ) { return lo + rand() % ( hi - lo ); } //取[lo, hi)中的随机整数
static float dice ( float range ) { return rand() % ( 1000 * ( int ) range ) / ( float ) 1000.; }
static double dice ( double range ) { return rand() % ( 1000 * ( int ) range ) / ( double ) 1000.; }
static char dice ( ) { return ( char ) ( 32 + rand() % 96 ); }

#endif //DSA_RAND_H