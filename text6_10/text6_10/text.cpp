#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[3][5] = { 1, 2, 3 , 4, 5, 2, 3, 4, 5, 6, 3, 4, 5, 6, 7 };
//	static int sum1 = 0;
//	static int max = 0;
//	for (i = 0; i < 3; ++i)
//	{
//		static int sum = 0;
//		for (int j = 0; j < 5; ++j)
//		{
//			if (arr[i][j] > max)
//				max = arr[i][j];
//			sum += arr[i][j];
//		}
//		double out = sum / 5.0;
//		sum1 += sum;
//		printf("第%d行的平均值： % lf\n", i+1, out);
//	}
//	double out1 = sum1 / 15.0;
//	printf("总共的平均值：%lf\n", out1);
//	printf("最大值：%d\n", max);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%255s", arr);
//	int num1 = 0;
//	int num2 = 0;
//	size_t n = strlen(arr);
//	for (int i = 0; i < n; ++i)
//	{
//		if (arr[i] >= 'A' && arr[i] <= 'Z')
//			num1++;
//		else if (arr[i] >= 'a' && arr[i] <= 'z')
//			num2++;
//	}
//	printf("大写字母的个数是：%d\n", num1);
//	printf("小写字母的个数是：%d\n", num2);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%255s", arr);
//	size_t len = strlen(arr);
//	for (int i = len-1; i >= 0; i--)
//		printf("%c ", arr[i]);
//	return 0;
//}




//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch[] = "Qingdao  AGRICULTURAL  University";
//	size_t len = strlen(ch);
//	double num = 0;
//	for (int i = len - 1; i >= 0; i--)
//	{
//		printf("%c ", ch[i]);
//	}
//	for (int j = 0; j < len; j++)
//	{
//		if (ch[j] == ' ')
//			ch[j] = '*';
//		if (ch[j] <= 'Z' && ch[j] >= 'A')
//			num++;
//	}
//	printf("\n");
//	for (int k = 0; k<len;k++)
//		printf("%c", ch[k]);
//	printf("\n");
//	printf("%lf", num / len);
//	return 0;
//}

#include <stdio.h>

int main()
{
	int arr[10] = { 1, 2, 4, 5, 5, 6, 7 };
	int num = 0;
	scanf("%d", &num);
	int m = 0;
	for (int i = 0; i < 7; i++)
	{
		if (arr[i] > num)
		{
			m = i;
			break;
		}
		else
			m = 7;
	}
	for (int j = 6; j >= m; j--)
		arr[j + 1] = arr[j];
	arr[m] = num;
	for (int k = 0; k < 8; k++)
		printf("%d ", arr[k]);
	return 0;
}















