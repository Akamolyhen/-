//
//  main.cpp
//  实验三
//
//  Created by 恶龙咆哮 on 2019/10/15.
//  Copyright © 2019 秦伟钦. All rights reserved.
//

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
using namespace std;
typedef int Status;
typedef char ElemType;
typedef struct{
    ElemType *base;
    ElemType *top;
    int stacksize;
}Sqstack;

Status InitStack(Sqstack &s)
{
    s.base=new ElemType[MAXSIZE];
    if(s.base==NULL)
        exit(1);
    s.top=s.base;
    s.stacksize=MAXSIZE;
    return 1;
}

int IsEmpty(Sqstack &s)
{
    if(s.top==s.base)
    {
        cout<<"栈空"<<endl;
        return 1 ;
    }
    else
        return 0;
}

Status Push(Sqstack &s,ElemType e)
{
    if(s.top-s.base==s.stacksize)
        return 0;
    *s.top=e;
    s.top++;
    return 1;
}
Status Pop(Sqstack &s,ElemType &e)
{
    if(IsEmpty(s))
        return 0;
    e=*--s.top;
    return 1;
}
ElemType gettop(Sqstack s)
{
    if(!IsEmpty(s))
        return *(s.top-1);
    else
        return 0;
}

int main()

{
    Sqstack s;
    InitStack(s);
    int i;
    ElemType ch;
    for(i=0;i<5;i++)
    {
        cin>>ch;
        Push(s, ch);
    }
    cout<<"GET THE TOP"<<endl;
    cout<<gettop(s)<<endl;
    for(i=0;i<5;i++)
    {
        Pop(s,ch);
        cout<<ch<<" ";
    }
    cout<<endl;
    return 0;
    
}
