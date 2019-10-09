//
//  seqlist.cpp
//  test_10.9
//
//  Created by 恶龙咆哮 on 2019/10/9.
//  Copyright © 2019 秦伟钦. All rights reserved.
//

#include "seqlist.hpp"
void SeqListInit(SeqList* psl,size_t capacity)//初始化
{
    psl->array=(SLDataType *)calloc(capacity,sizeof(SLDataType));
    psl->capacity=capacity;
    psl->size=0;
}
void SeqListDestory(SeqList* psl)//销毁
{
    if(psl->array)
    { free(psl->array);
        psl->array=NULL;
        psl->size=0;
        psl->capacity=0;
    }
}
void Checkcapacity(SeqList* psl)//检查容量
{
    if(psl->size>=psl->capacity)
    {
        psl->capacity *=2;
        psl->array=(SLDataType *)realloc(psl->array,psl->capacity*sizeof(SLDataType));
    }
}
void SeqListPushBack(SeqList* psl,SLDataType x)
{
    Checkcapacity(psl);
    psl->array[psl->size]=x;
    psl->size++;
}
void SeqListPopBack(SeqList* psl)
{
    psl->size--;
}
void SeqListPushFront(SeqList* psl,SLDataType x)
{
    int i;
    Checkcapacity(psl);
    for(i=(int)psl->size-1;i>=0;i--)
    {
        psl->array[i+1]=psl->array[i];
    }
    psl->array[0]=x;
    psl->size++;
}
void SeqListPopFront(SeqList* psl)
{
    int i;
    for(i=0;i<(int)psl->size-1;i++)
    {
        psl->array[i]=psl->array[i+1];
    }
    psl->size--;
}
int SeqListFind(SeqList* psl,SLDataType x)//查找函数，返回下标
{
    for(int i=0;i<psl->size;i++)
    {
        if(psl->array[i]==x)
            return i;
    }
    return -1;
}
void SeqListInsert(SeqList* psl,size_t pos,SLDataType x)
{
    int i;
    Checkcapacity(psl);
    for(i=(int)psl->size-1;i>=pos;i--)
    {
        psl->array[i+1]=psl->array[i];
    }
    psl->array[pos]=x;
    psl->size++;
}
void SeqListErase(SeqList* psl,size_t pos)
{
    int i;
    for(i=(int)pos;i<(int)psl->size-1;i++)
    {
        psl->array[i]=psl->array[i+1];
    }
    psl->size--;
}
void SeqListRemove(SeqList* psl,SLDataType x)
{
    SeqListErase(psl, SeqListFind(psl ,x));
}
void SeqListModify(SeqList* psl,size_t pos,SLDataType x)//顺序表的修改
{
    psl->array[pos]=x;
}
void SeqListPrint(SeqList* psl)
{
    int i;
    for(i=0;i<psl->size;i++)
    {
        printf("%d ",psl->array[i]);
    }
    printf("size=%d\n",(int)psl->size);
}
