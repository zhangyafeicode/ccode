#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <stdbool.h>
//
//bool is_sushu(int num)
//{
//	if (num <= 1) return false;
//	for (int i = 2; i * i < num; i++)
//	{
//		if (num % i == 0)
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	int num = 2;
//	int count = 0;
//	for (; num <= 200; num++)
//	{
//		if (is_sushu(num))
//		{
//			printf("%3d  ", num);
//			count++;
//		}
//		if (count == 5)
//		{
//			printf("\n");
//			count = 0;
//		}
//	}
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//	float num = 0;
//	float ret = 0;
//	float sum = 0;
//	for (num = 1; num <= 1000; num++)
//	{
//		ret = num / (num + 1);
//		sum += ret;
//	}
//	printf("%f\n", sum);
//	return 0;
//}
//



//#include <stdio.h>
//int main()
//{
//	int arr[10] = { -2, -1, 0, 1, 3, 4, 5,6 ,6, 9 };
//	int i = 0;
//	int max = arr[0];
//	int num_0 = 0;
//	int num_zhengshu = 0;
//	int num_fushu = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] > 0)
//			num_zhengshu++;
//		else if (arr[i] < 0)
//			num_fushu++;
//		else
//			num_0++;
//	}
//	printf("最大值是：%d\n", max);
//	printf("正数的个数是：%d\n", num_zhengshu);
//	printf("负数的个数是：%d\n", num_fushu);
//	printf("0的个数是：%d\n", num_0);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	static int loc = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 2; j >= i; j--)
//			printf(" ");
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("%c", 'A' + loc++);
//		}
//		printf("\n");
//	}
//
//	for (i = 2; i > 0; i--)
//	{
//		for (j = 0; j < 4-i; j++)
//			printf(" ");
//		for (j = 0; j < 2*i-1; j++)
//		{
//			printf("%c", 'A' + loc++);
//		}
//		printf("\n");
//	}
//	return 0;
//}



#include <stdio.h>
#include <math.h>
int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	double ret1 = 0;
	double ret2 = 0;
	printf("请输入方程的三个系数：");
	scanf("%lf%lf%lf", &a, &b, &c);
	if ((b * b - 4 * a * c) >= 0)
	{
		ret1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		ret2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		printf("ret1 = %lf\n", ret1);
		printf("ret2 = %lf\n", ret2);
	}
	else
		printf("ERROR");
	return 0;
}