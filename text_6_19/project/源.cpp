#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  // 用于控制控制台窗口相关操作，如清屏等

#include <stdlib.h>
#include <stdio.h>
#define LIST_INIT_SIZE 10 // 线性表的最大长度
#define OK 1
#define ERROR 0
#define OVERFLOW -2 
typedef int Status; // Status是函数的类型,其值是函数结果状态代码，如OK等
typedef int ElemType;

typedef struct
{
    ElemType* elem; // 存储空间起始地址
    int length; // 当前长度
}SqList;

Status InitList(SqList& L)
//SqList& L,L为引用参数，在内存中并没有产生实参的副本，它直接对实参操作
//也就是说，在这个函数体里面对顺序表L执行的操作，其实就是对main函数中InitList(L)这里的顺序表L进行操作
{



}


Status ListInsert(SqList& L, int i, ElemType e)
{ // 初始条件：顺序线性表L已存在，1≤i≤L.length+1
  // 操作结果：在L中第i个位置之前插入新的数据元素e，L的长度加1




}

Status ListDelete(SqList& L, int i, ElemType& e)
{ // 初始条件：顺序线性表L已存在，1≤i≤L.length
  // 操作结果：删除L的第i个数据元素，并用e返回其值，L的长度减1




}

void ListPrint(SqList L)
{
    int i;
    printf("线性表中的元素为：\n");
    for (i = 0; i <= L.length - 1; i++)
        printf("%d  ", L.elem[i]);
}

void main()
{
    SqList L;
    int i, j;
    ElemType e;
    InitList(L);

    printf("请输入5个数据元素：\n");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &e);
        L.elem[i] = e;
        L.length++;
    }

    ListPrint(L);

    printf("\n请输入删除元素所在位置:\n");
    scanf("%d", &j);
    ListDelete(L, j, e);
    printf("被删除的元素为：%d\n", e);
    ListPrint(L);

    printf("\n请输入插入位置及待插入的数据元素的值:\n");
    scanf("%d%d", &j, &e);
    ListInsert(L, j, e);
    ListPrint(L);
}