#define _CRT_SECURE_NO_WARNINGS

//#include <string.h>
//#include <stdio.h>
//
//int fun_16(char ch[])
//{
//	int ret = 0;
//	int len = strlen(ch);
//	for (int i = 0; i < len; i++)
//	{
//		char num = ch[i];
//		int dig = 0;
//		if (num >= 'a' && num <= 'z')
//		{
//			dig = 10 + num - 'a';
//		}
//		else if (num >= 'A' && num <= 'Z')
//		{
//			dig = 10 + num - 'A';
//		}
//		else if (num >= '0' && num <= '9')
//		{
//			dig = num - '0';
//		}
//		else
//		{
//			return -1;
//		}
//		ret = ret * 16 + dig;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char num1[] = "ab32";
//	printf("%s这个字符数转化为10机制的结果是：%d", num1, fun_16(num1));
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//int fun(char ch[])
//{
//	int count = 0;
//	int len = strlen(ch);
//	for (int i = 0; i < len; i++)
//	{
//		if ((ch[i] < 9 && ch[i] > 0) ||
//			(ch[i] > 'A' && ch[i] < 'Z') ||
//			(ch[i] > 'a' && ch[i] < 'z'))
//			count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "fafg&&&";
//	printf("%d\n", fun(arr));
//	return 0;
//}

//
//#include <stdio.h>
//void copyarray(int dest[], int src[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		dest[i] = src[i];
//	}
//}
//
//int main()
//{
//	int arr1[3] = { 1, 2 , 3 };
//	int arr2[3];
//	copyarray(arr2, arr1, 3);
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
_Bool is_Q(char ch[])
{
	int len = strlen(ch);
	for (int i = 0; i < len; i++)
	{
		if (ch[i] == 'Q')
			return true;
	}
	return false;
}


int main()
{
	char name1[] = "zhang";
	char name2[] = "li";
	char name3[] = "wang";
	char name4[] = "QQ";
	char name5[] = "lu";
	char* name[] = {name1, name2, name3, name4, name5};

	for (int i = 0; i < 5; i++)
	{
		if (is_Q(name[i]))
			printf("%s里面含有Q", name[i]);
	}
	return 0;
}


