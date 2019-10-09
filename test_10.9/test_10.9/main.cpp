//
//  main.cpp
//  test_10.9
//
//  Created by 恶龙咆哮 on 2019/10/9.
//  Copyright © 2019 秦伟钦. All rights reserved.
//
#include "seqlist.hpp"
int main()
{
    SeqList test;
    SeqListInit(&test, 100);
    SeqListPushBack(&test, 1);
    SeqListPushBack(&test, 2);
    SeqListPushBack(&test, 3);
    SeqListPushBack(&test, 4);
    SeqListPushBack(&test, 5);
    SeqListPushBack(&test, 6);
    SeqListPushFront(&test,9);
    SeqListPushFront(&test,8);
    SeqListPushFront(&test,7);
    SeqListPushFront(&test,6);
    SeqListPrint(&test);
    
}
