#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	char arr[] = "hello QAU";
//	char *p = arr;
//
//	char* end = p;
//	while (*end != 'U')
//	{
//		end++;
//	}
//	for (char* a = end; a >= p; a--)
//	{
//		printf("%c", *a);
//	}
//	printf("\n");
//	int count = 0;
//	for (char* a = p; *a != '\0'; a++)
//	{
//		if (islower(*a))
//			count++;
//	}
//	printf("Сд��ĸ�ĸ�����%d\n", count);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 1234;
//	unsigned char* p = (unsigned char*) & a;
//	for (int i = 0; i < 4; i++)
//	{
//		printf("��%d���ֽڵĵ�ַ��%p��������%x\n",
//			i + 1,
//			p + i,
//			*(p + i)
//		);
//	}
//	return 0;
//}

//#include <string.h>
//#include <stdio.h>
//int ishw(char* a, int n)
//{
//	if (n <= 0) return 0;
//	char* start = a;
//	char* end = a + n - 1;
//
//	for (int i = 0; i <n / 2; i++)
//	{
//		if (*(a + i) != *(end - i))
//			return 0;
//	}
//	return 1;
//}
//void isorno(int n)
//{
//	if (n)
//		printf("��");
//	else
//		printf("����");
//}
//
//int main()
//{
//	char a[] = "gffg";
//	int len = strlen(a);
//	int n = ishw(a, len);
//	isorno(n);
//	return 0;
//}


#include <stdio.h>
int Num(int* n, int len)  //�������ͳ���
{
	int max = n[0];
	int min = n[0];
	int* end = n + len - 1;
	for (int* p = n; p <= end; p++)
	{
		if (*p > max)
			max = *p;
		if (*p < min)
			min = *p;
	}
	int num = max - min;
}

int main()
{
	int arr[] = { 1, 2, 4 , 5, 6, 6, 20 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("���ֵ����Сֵ�Ĳ%d\n", Num(arr, len));
	return 0;
}