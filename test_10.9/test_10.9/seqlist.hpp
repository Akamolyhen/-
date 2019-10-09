//
//  seqlist.hpp
//  test_10.9
//
//  Created by 恶龙咆哮 on 2019/10/9.
//  Copyright © 2019 秦伟钦. All rights reserved.
//

#ifndef seqlist_hpp
#define seqlist_hpp
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int SLDataType;
typedef struct SeqList
{
    SLDataType* array ;//只想动态开辟的数组
    size_t size;       //有效数据个数
    size_t capacity;  //容量空间大小
}SeqList;
void SeqListInit(SeqList* psl,size_t capacity);//初始化
void SeqListDestory(SeqList* psl);//销毁
void Checkcapacity(SeqList* psl);//检查容量
void SeqListPushBack(SeqList* psl,SLDataType x);
void SeqListPopBack(SeqList* psl);
void SeqListPushFront(SeqList* psl,SLDataType x);
void SeqListPopFront(SeqList* psl);
int SeqListFind(SeqList* psl,SLDataType x);//查找函数，返回下标
void SeqListInsert(SeqList* psl,size_t pos,SLDataType x);
void SeqListErase(SeqList* psl,size_t pos);
void SeqListRemove(SeqList* psl,SLDataType x);
void SeqListModify(SeqList* psl,size_t pos,SLDataType x);//顺序表的修改
void SeqListPrint(SeqList* psl);


#endif /* seqlist_hpp */
