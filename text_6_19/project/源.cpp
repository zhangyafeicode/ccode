#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  // ���ڿ��ƿ���̨������ز�������������

#include <stdlib.h>
#include <stdio.h>
#define LIST_INIT_SIZE 10 // ���Ա����󳤶�
#define OK 1
#define ERROR 0
#define OVERFLOW -2 
typedef int Status; // Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK��
typedef int ElemType;

typedef struct
{
    ElemType* elem; // �洢�ռ���ʼ��ַ
    int length; // ��ǰ����
}SqList;

Status InitList(SqList& L)
//SqList& L,LΪ���ò��������ڴ��в�û�в���ʵ�εĸ�������ֱ�Ӷ�ʵ�β���
//Ҳ����˵������������������˳���Lִ�еĲ�������ʵ���Ƕ�main������InitList(L)�����˳���L���в���
{



}


Status ListInsert(SqList& L, int i, ElemType e)
{ // ��ʼ������˳�����Ա�L�Ѵ��ڣ�1��i��L.length+1
  // �����������L�е�i��λ��֮ǰ�����µ�����Ԫ��e��L�ĳ��ȼ�1




}

Status ListDelete(SqList& L, int i, ElemType& e)
{ // ��ʼ������˳�����Ա�L�Ѵ��ڣ�1��i��L.length
  // ���������ɾ��L�ĵ�i������Ԫ�أ�����e������ֵ��L�ĳ��ȼ�1




}

void ListPrint(SqList L)
{
    int i;
    printf("���Ա��е�Ԫ��Ϊ��\n");
    for (i = 0; i <= L.length - 1; i++)
        printf("%d  ", L.elem[i]);
}

void main()
{
    SqList L;
    int i, j;
    ElemType e;
    InitList(L);

    printf("������5������Ԫ�أ�\n");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &e);
        L.elem[i] = e;
        L.length++;
    }

    ListPrint(L);

    printf("\n������ɾ��Ԫ������λ��:\n");
    scanf("%d", &j);
    ListDelete(L, j, e);
    printf("��ɾ����Ԫ��Ϊ��%d\n", e);
    ListPrint(L);

    printf("\n���������λ�ü������������Ԫ�ص�ֵ:\n");
    scanf("%d%d", &j, &e);
    ListInsert(L, j, e);
    ListPrint(L);
}