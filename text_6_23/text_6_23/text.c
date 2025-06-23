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
//	printf("小写字母的个数是%d\n", count);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 1234;
//	unsigned char* p = (unsigned char*) & a;
//	for (int i = 0; i < 4; i++)
//	{
//		printf("第%d个字节的地址是%p，内容是%x\n",
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
//		printf("是");
//	else
//		printf("不是");
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
int Num(int* n, int len)  //数组名和长度
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
	printf("最大值和最小值的差：%d\n", Num(arr, len));
	return 0;
}